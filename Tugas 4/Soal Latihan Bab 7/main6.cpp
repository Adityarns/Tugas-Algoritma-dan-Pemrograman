#include <iostream>
using namespace std;

int main() {
    int totalBelanja;
    cout << "Masukkan total belanja: Rp";
    cin >> totalBelanja;

    int totalDibulatkan = (totalBelanja / 50) * 50;

    cout << "Total belanja setelah dibulatkan ke bawah: Rp" << totalDibulatkan << endl;

    return 0;
}
