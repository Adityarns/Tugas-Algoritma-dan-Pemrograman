#include <iostream>

using namespace std;

int main() {
    int x;

    cout << "Masukkan bilangan bulat: ";
    cin >> x;

    if (x > 0) {
        cout << "positif" << endl;
    } else if (x < 0) {
        cout << "negatif" << endl;
    } else {
        cout << "nol" << endl;
    }

    return 0;
}
