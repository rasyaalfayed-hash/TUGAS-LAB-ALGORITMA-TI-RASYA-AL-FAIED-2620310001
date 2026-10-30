#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama;
    float nilai1, nilai2, nilai3, rataRata;

    cout << "PROGRAM HITUNG NILAI RATA-RATA" << endl;
    cout << "================================" << endl;

    cout << "Nama Siswa          : ";
    getline(cin, nama);

    cout << "Nilai Pertandingan I   : ";
    cin >> nilai1;

    cout << "Nilai Pertandingan II  : ";
    cin >> nilai2;

    cout << "Nilai Pertandingan III : ";
    cin >> nilai3;

    rataRata = (nilai1 + nilai2 + nilai3) / 3;

    cout << "\n========== HASIL ==========" << endl;
    cout << "Nama Siswa : " << nama << endl;
    cout << "Nilai Rata-rata : " << rataRata << endl;

    if (rataRata >= 85) {
        cout << "Hadiah: Komputer Core i5" << endl;
    } 
    else if (rataRata >= 70) {
        cout << "Hadiah: Uang Rp 2.500.000" << endl;
    } 
    else {
        cout << "Hadiah: Hiburan" << endl;
    }

    return 0;
}
