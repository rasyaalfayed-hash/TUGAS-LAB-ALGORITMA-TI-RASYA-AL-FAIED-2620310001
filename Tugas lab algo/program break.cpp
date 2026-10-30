#include <iostream>
using namespace std;

int main() {
    int a = 3, b = 2, c = 1;

    cout << "Bil-A | Bil-B | Bil-C" << endl;
    cout << "----------------------" << endl;

    for (int bil = 1; bil <= 10; bil++) {
        a = a + b;
        b = b + c;
        c = c + 2;

        cout << a << "\t| "
             << b << "\t| "
             << c << endl;

        if (c == 13) {
            break;
        }
    }

    return 0;
}
