// Membaca input dari pengguna dengan cin.
// Coba jalankan dengan nama satu kata, lalu dengan nama dua kata. Amati bedanya.
#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama;
    int angkatan = 0;
    double nilai = 0;

    cout << "Nama     : Siti Aminah";
    getline(cin, nama);
    cout << "Angkatan : 2024";
    cin >> angkatan;
    cout << "Nilai    : 88.5";
    cin >> nilai;

    cout << "\nHalo, " << nama << " angkatan " << angkatan
              << ". Nilaimu " << nilai << ".\n";
    return 0;
}
