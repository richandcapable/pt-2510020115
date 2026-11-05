# P07 std::string dan Validasi Masukan

Folder kode Pertemuan 7 Pemrograman Terstruktur, pertemuan terakhir sebelum UTS. Program yang punya
keputusan atau perulangan berpasangan dengan flowchart di modul; dua program yang alurnya lurus
(`gabung_banding.cpp`, `getline_campur.cpp`) tidak.

## Isi

| Berkas | Kegunaan |
|---|---|
| `gabung_banding.cpp` | `+`, `==`, `<`, `.length()`, `[posisi]`: dasar-dasar string |
| `huruf_per_huruf.cpp` | for dari 0 sampai `length() - 1`: hitung kata dan vokal, balik, kapital |
| `rapikan_nama.cpp` | Huruf Besar Di Awal Kata dengan bendera `awal_kata`, `toupper`, `tolower` |
| `getline_campur.cpp` | Jebakan Enter yang tersisa setelah `cin >>`; obatnya `cin.ignore(1000, '\n')` disisipkan di praktikum |
| `input_aman.cpp` | Membaca angka dengan aman: `cin.fail()`, `cin.clear()`, `cin.ignore()`; penyembuh perulangan tanpa henti P5 |
| `validasi_nama.cpp` | do-while sampai nama sah: tidak kosong, bukan hanya spasi, tanpa angka |
| `sinilai_v06_awal.cpp` | Starter SiNilai v0.6: v0.5 utuh, lengkapi pembacaan aman dan validasi serta perapian nama |
| `contoh_masukan.txt` | Enam mahasiswa dengan masukan sengaja berantakan: nama kosong, `r2d2`, `abc`, `120` |
| `.vscode/`, `.gitignore` | Sama dengan Pertemuan 6 (termasuk `launch.json` debugger) |

## Kasus uji SiNilai v0.6 (`./sinilai_v06 < contoh_masukan.txt`)

Data mahasiswanya sama dengan Pertemuan 6, tetapi berkasnya berisi jebakan: nama ditulis
`siti AMINAH` dan `BUDI SANTOSO`, ada baris kosong sebelum nama Budi, ada nama `r2d2` sebelum Rina,
ada `abc` untuk nilai mingguan Dewi, dan `120` untuk UTS Eko. Program yang benar menolak semua jebakan
itu, meminta ulang, merapikan nama, dan menghasilkan laporan yang persis sama dengan v0.5:

| Mahasiswa (sudah dirapikan) | Nilai akhir | Huruf | Status |
|---|---|---|---|
| Siti Aminah | 83.97 | A | Lulus |
| Budi Santoso | 67.75 | C+ | Lulus |
| Rina Wati | 49.50 | D | Belum lulus |
| Dewi Lestari | 90.00 | A | Lulus |
| Eko Prasetyo | 71.00 | B | Lulus |
| Fajar Nugroho | 25.75 | E | Belum lulus |

Laporan kelas: 6 mahasiswa, 4 lulus, 2 belum lulus, rata-rata 64.66, tertinggi Dewi Lestari (90.00),
sebaran A 2, B 1, C 1, D 1, E 1.

Starter (`sinilai_v06_awal.cpp`) berjalan benar untuk masukan yang bersih, tetapi menghasilkan
laporan kacau untuk `contoh_masukan.txt`: itulah yang harus kamu perbaiki.

## Yang dikumpulkan mahasiswa

Folder `p07` di repository `pt-NPM` berisi `sinilai_v06.cpp`. Lihat Modul Pertemuan 7 bagian E.

## Deklarasi AI
AI 1
AI: Gemini
Prompt:     apa arti error berikut? $ g++ -std=c++17 -Wall -Wextra -pedantic .\sinilai_v06.cpp -o .\sinilai_v06.exe

cmd /c ".\sinilai_v06.exe < .\contoh_masukan.txt"

cc1plus.exe: fatal error: .sinilai_v06.cpp: No such file or directory

compilation terminated.

Microsoft Windows [Version 10.0.26100.9278]         cd "/e/Uniska/Pemrograman Terstruktur/pt-2510020115/p07/" && g++ -std=c++20 -Wall -Wextra -Wpedantic -g sinilai_v06.cpp -o sinilai_v06 && "/e/Uniska/Pemrograman Terstruktur/pt-2510020115/p07/"sinilai_v06Uniska\Pemrograman Terstruktur\pt-2510020115\p07>

The system cannot find the path specified.

Umpan Balik: Error tersebut muncul karena terjadi bentrok format path (jalur folder) antara perintah yang dijalankan (format Linux/MSYS2) dengan terminal yang sedang aktif (Windows Command Prompt).
Tuliskan AI yang digunakan, prompt, dan umpan balik AI
