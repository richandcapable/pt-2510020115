// SiNilai v0.4: memproses banyak mahasiswa sekaligus dan mencetak rekap kelas.
// Dibangun di atas v0.3: seluruh perhitungan satu mahasiswa dibungkus perulangan.
// Kepala perulangan, akumulator, dan rekap adalah bagian yang harus kamu lengkapi.
#include <iostream>
#include <string>
#include <iomanip> // Ditambahkan untuk mengatur perataan teks (setw, left)

using namespace std;

int main() {
    const double BOBOT_KEHADIRAN = 0.10;
    const double BOBOT_MINGGUAN = 0.45;
    const double BOBOT_UTS = 0.25;
    const double BOBOT_UAS = 0.20;

    int jumlah_mahasiswa = 0;
    cout << "=== SiNilai v0.4 ===\n";
    
    // TODO 1: do-while untuk validasi jumlah mahasiswa
    do {
        cout << "Jumlah mahasiswa (paling sedikit 1): ";
        cin >> jumlah_mahasiswa;
    } while (jumlah_mahasiswa < 1);

    // TODO 2: Deklarasi akumulator
    double total_nilai = 0;
    int jumlah_lulus = 0;

    // TODO 3: Kepala for loop
    for (int i = 1; i <= jumlah_mahasiswa; i++) {
        string nama;
        string npm;
        double kehadiran = 0;
        double mingguan = 0;
        double uts = 0;
        double uas = 0;

        // Mengubah angka 1 menjadi variabel i
        cout << "\n--- Mahasiswa ke-" << i << " dari " << jumlah_mahasiswa << " ---\n";   
        cout << "Nama      : ";
        getline(cin >> ws, nama);   
        cout << "NPM       : ";
        cin >> npm;
        cout << "Kehadiran : ";
        cin >> kehadiran;
        cout << "Mingguan  : ";
        cin >> mingguan;
        cout << "UTS       : ";
        cin >> uts;
        cout << "UAS       : ";
        cin >> uas;

        double nilai_akhir = kehadiran * BOBOT_KEHADIRAN + mingguan * BOBOT_MINGGUAN
                           + uts * BOBOT_UTS + uas * BOBOT_UAS;

        string huruf_mutu;
        if (nilai_akhir >= 80) {
            huruf_mutu = "A";
        } else if (nilai_akhir >= 75) {
            huruf_mutu = "B+";
        } else if (nilai_akhir >= 70) {
            huruf_mutu = "B";
        } else if (nilai_akhir >= 65) {
            huruf_mutu = "C+";
        } else if (nilai_akhir >= 60) {
            huruf_mutu = "C";
        } else if (nilai_akhir >= 40) {
            huruf_mutu = "D";
        } else {
            huruf_mutu = "E";
        }

        bool lulus = nilai_akhir >= 60;

        string keterangan;
        switch (huruf_mutu[0]) {
            case 'A':
                keterangan = "Sangat baik";
                break;
            case 'B':
                keterangan = "Baik";
                break;
            case 'C':
                keterangan = "Cukup";
                break;
            case 'D':
                keterangan = "Kurang";
                break;
            default:
                keterangan = "Sangat kurang";
        }

        cout << "\n--- Kartu Nilai Mahasiswa ---\n";
        cout << "Nama        : " << nama << "\n";
        cout << "NPM         : " << npm << "\n";
        cout << "Nilai akhir : " << nilai_akhir << "\n";
        cout << "Huruf mutu  : " << huruf_mutu << "\n";
        cout << "Keterangan  : " << keterangan << "\n";
        if (lulus) {
            cout << "Status      : Lulus\n";
        } else {
            cout << "Status      : Belum lulus\n";
        }

        // TODO 4: Update akumulator
        total_nilai += nilai_akhir;
        if (lulus) {
            jumlah_lulus++;
        }
    }

    // TODO 5: Cetak rekap kelas
    cout << "\n=== Rekap Kelas ===\n";
    cout << left << setw(18) << "Jumlah mahasiswa" << ": " << jumlah_mahasiswa << "\n";
    cout << left << setw(18) << "Lulus" << ": " << jumlah_lulus << "\n";
    cout << left << setw(18) << "Belum lulus" << ": " << (jumlah_mahasiswa - jumlah_lulus) << "\n";
    cout << left << setw(18) << "Rata-rata kelas" << ": " << (total_nilai / jumlah_mahasiswa) << "\n";

    return 0;
}