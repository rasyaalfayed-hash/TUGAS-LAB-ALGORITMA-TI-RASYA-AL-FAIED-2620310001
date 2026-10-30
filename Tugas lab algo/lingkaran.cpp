#include <iostream>
using namespace std;

int main() {
    const float PI = 3.14159;
    float r, t;

    cout << "Masukkan jari-jari: ";
    cin >> r;
    cout << "Masukkan tinggi tabung: ";
    cin >> t;

    float luas = PI * r * r;
    float volume = PI * r * r * t;

    cout << "Luas lingkaran = " << luas << endl;
    cout << "Volume tabung  = " << volume << endl;

    return 0;
}
