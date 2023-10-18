- Semaphore
  Adalah struktur data yang digunakan untuk mengontrol akses bersama atau berbagi sumber daya dalam lingkungan konkurensi. Semaphore adalah konsep yang penting dalam pemrograman paralel dan sistem operasi real-time untuk mencegah konflik akses ke sumber daya bersama oleh berbagai tugas atau utas (threads).

- Semaphore dapat berperan sebagai alat penguncian yang memungkinkan satu atau lebih tugas untuk mengakses sumber daya bersama, tetapi hanya dengan izin tertentu. Ada dua jenis semaphore utama:

  - Binary Semaphore (Semaphore Binari): Juga dikenal sebagai mutex, ini hanya memiliki dua nilai: 0 dan 1. Tugas dapat meminta atau melepaskan (lock atau unlock) semafor biner. Ini digunakan untuk mengizinkan atau menahan akses ke satu sumber daya pada satu waktu. Misalnya, mutex digunakan untuk mengunci akses ke sejumlah variabel atau sumber daya kritis sehingga hanya satu tugas dapat mengaksesnya pada satu waktu.
  - Counting Semaphore (Semaphore Penghitung): Semaphore penghitung dapat memiliki sejumlah nilai yang lebih besar dari satu. Ini digunakan untuk mengontrol sumber daya yang dapat diakses oleh beberapa tugas sekaligus. Setiap kali tugas meminta semaphore, nilainya berkurang, dan ketika tugas melepaskan semaphore, nilainya bertambah. Ini digunakan dalam situasi di mana lebih dari satu tugas perlu mengakses sumber daya bersama, dan Anda ingin mengontrol jumlah tugas yang diizinkan mengaksesnya pada saat yang sama.

- Semaphore membantu menghindari kondisi perlombaan (race condition) dan konflik akses di lingkungan konkurensi dengan memungkinkan tugas untuk mengkoordinasikan akses mereka ke sumber daya bersama. Semaphores sering digunakan dalam sistem operasi real-time, pemrograman paralel, dan pengembangan aplikasi konkuren.
