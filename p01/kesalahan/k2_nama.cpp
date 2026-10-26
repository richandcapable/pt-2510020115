// Kesalahan 2: nama yang belum dikenal. Variabel dipakai sebelum dideklarasikan,
// dan ada salah ketik huruf besar. Di Python kesalahan ini baru terasa saat baris
// itu dijalankan; di C++ ditolak compiler sebelum program pernah berjalan.
#include <iostream>

int main() {
    int nilai = 80;
    int bonus = 10;
    std::cout << "nilai: " << nilai << "\n";
    std::cout << "bonus: " << bonus << "\n";
    return 0;
}
