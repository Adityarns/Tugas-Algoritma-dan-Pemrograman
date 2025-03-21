#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double panjang, inchi, kaki, yard;
    
    cout << "Masukkan panjang dalam cm: ";
    cin >> panjang;

    inchi = panjang * 1000 / 25.4;
    kaki = panjang * 100/30.48;
    yard = panjang / 0.9144;

    cout << "Panjang benda setelah di konversi: " << inchi << " Inchi " << kaki << " kaki " << yard << " yard " << endl;
    
    return 0;
}
