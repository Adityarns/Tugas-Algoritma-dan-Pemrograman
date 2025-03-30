#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Masukkan tiga bilangan bulat: ";
    cin >> a >> b >> c;

    if (a > b) {
        swap(a, b);
    }
    if (a > c) {
        swap(a, c);
    }
    if (b > c) {
        swap(b, c);
    }

    cout << "Bilangan dalam urutan dari kecil-besar: " << a << " " << b << " " << c << endl;

    return 0;
}