SemaphoreHandle_t dataSemaphore;
int sharedData = 0;

void task1(void *parameter) {
  while (true) {
    int randomData = random(0, 100);
    if (xSemaphoreTake(dataSemaphore, portMAX_DELAY)) {
      sharedData = randomData;
      xSemaphoreGive(dataSemaphore);
    }
    vTaskDelay(1000 / portTICK_PERIOD_MS);
  }
}

void task2(void *parameter) {
  while (true) {
    if (xSemaphoreTake(dataSemaphore, portMAX_DELAY)) {
      int receivedData = sharedData;
      xSemaphoreGive(dataSemaphore);
      Serial.print("Received data in Task 2: ");
      Serial.println(receivedData);
    }
  }
}

void setup() {
  Serial.begin(115200);
  dataSemaphore = xSemaphoreCreateCounting(1, 1);
  xTaskCreatePinnedToCore(task1, "Task1", 10000, NULL, 1, NULL, 0);
  xTaskCreatePinnedToCore(task2, "Task2", 10000, NULL, 1, NULL, 1);
}

void loop() {}
