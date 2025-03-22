#include <iostream>
using namespace std;

int main() {
    int angka;
    cout << "Masukkan bilangan bulat positif: ";
    cin >> angka;

    if (angka > 0) {
        if (angka % 4 == 0) {
            cout << angka << " adalah kelipatan 4.\n";
        } else {
            cout << angka << " bukan kelipatan 4.\n";
        }
    } else {
        cout << "Masukkan bilangan positif!\n";
    }

    return 0;
}
