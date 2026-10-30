#include <iostream>
using namespace std;

int main() {
    int angka;
    bool prima = true;

    cout << "Masukkan bilangan: ";
    cin >> angka;

    if (angka < 2) {
        prima = false;
    } else {
        for (int i = 2; i * i <= angka; i++) {
            if (angka % i == 0) {
                prima = false;
                break;
            }
        }
    }

    if (prima) {
        cout << "Termasuk bilangan PRIMA" << endl;
    } else {
        cout << "Bukan termasuk bilangan prima" << endl;
    }

    return 0;
}
