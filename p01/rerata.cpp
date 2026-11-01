// Lab porting: pindahkan rerata.py ke C++.
// Lengkapi tiga bagian bertanda TODO, lalu bangun dengan baseline kelas.
#include <iomanip>
#include <iostream>

int main() {
    int tugas1 = 80;
    int tugas2 = 85;
    int tugas3 = 90;
    int uts = 75;
    int uas = 90;

    // TODO 1: hitung jumlah ketiga nilai. Di C++ tipe variabel wajib ditulis.
    int jumlah = tugas1 + tugas2 + tugas3 + uts + uas;

    // TODO 2: hitung rata-rata. Ingat, int dibagi int membuang pecahannya.s
    //         Pakai tipe double dan pastikan pembagiannya bukan pembagian bilangan bulat.
    double rerata = static_cast<double>(jumlah) / 5;

    // TODO 3: cetak hasil dengan dua angka di belakang koma, sama seperti versi Python.
    std::cout << "Jumlah    : " << jumlah << "\n";
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Rata-rata : " << rerata << "\n";
    return 0;
}
