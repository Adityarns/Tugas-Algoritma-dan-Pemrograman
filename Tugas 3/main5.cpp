#include <iostream>
using namespace std;

int main() {
    int uang, pecahan1000, pecahan500, pecahan100, pecahan50, pecahan25;
    
    cout << "Masukkan jumlah uang (kelipatan 25): ";
    cin >> uang;

    pecahan1000 = uang / 1000;
    uang %= 1000;

    pecahan500 = uang / 500;
    uang %= 500;

    pecahan100 = uang / 100;
    uang %= 100;

    pecahan50 = uang / 50;
    uang %= 50;

    pecahan25 = uang / 25;
    uang %= 25;

    cout << "Pecahan uang:\n"
         << pecahan1000 << " x Rp1000\n"
         << pecahan500 << " x Rp500\n"
         << pecahan100 << " x Rp100\n"
         << pecahan50 << " x Rp50\n"
         << pecahan25 << " x Rp25\n";

    return 0;
}
