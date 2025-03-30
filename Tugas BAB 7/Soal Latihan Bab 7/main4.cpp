#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int sisi1, sisi2, sisi3;
    cout << "Masukkan panjang tiga sisi segitiga: ";
    cin >> sisi1 >> sisi2 >> sisi3;

    if (sisi1 > sisi2) {
        swap(sisi1, sisi2);
    }
    if (sisi2 > sisi3) {
        swap(sisi2, sisi3);
    }
    if (sisi1 > sisi2) {
        swap(sisi1, sisi2);
    }

    int sisiMiringKuadrat = sisi3 * sisi3;
    int jumlahSisiTegakKuadrat = (sisi1 * sisi1) + (sisi2 * sisi2);

    cout << "Jenis segitiga: ";
    if (jumlahSisiTegakKuadrat == sisiMiringKuadrat)
        cout << "Segitiga Siku-siku" << endl;
    else if (jumlahSisiTegakKuadrat > sisiMiringKuadrat)
        cout << "Segitiga Lancip" << endl;
    else
        cout << "Segitiga Tumpul" << endl;

    return 0;
}
