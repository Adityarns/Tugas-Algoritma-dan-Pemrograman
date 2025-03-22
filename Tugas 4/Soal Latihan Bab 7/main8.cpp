#include <iostream>

using namespace std;

int clipPixel(int nilai) {
    if (nilai > 255) return 255;
    if (nilai < 0) return 0;
    return nilai;
}

int main() {
    int nilaiPixel;
    cout << "Masukkan nilai pixel: ";
    cin >> nilaiPixel;
    cout << "Nilai pixel setelah clipping: " << clipPixel(nilaiPixel) << endl;
    return 0;
}
