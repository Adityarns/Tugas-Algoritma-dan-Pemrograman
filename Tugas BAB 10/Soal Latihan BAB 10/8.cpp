#include <iostream>
#include <string>
using namespace std;

int HariKeAngka(string hari) {
    if (hari == "senin") return 1;
    else if (hari == "selasa") return 2;
    else if (hari == "rabu") return 3;
    else if (hari == "kamis") return 4;
    else if (hari == "jumat") return 5;
    else if (hari == "sabtu") return 6;
    else if (hari == "minggu") return 7;
    else return 0; 
}

void TampilkanHariBesok(string hariSekarang) {
    int kodeHari = HariKeAngka(hariSekarang);
    switch (kodeHari) {
        case 1: cout << "Kemarin adalah hari: minggu" << endl; break;
        case 2: cout << "Kemarin adalah hari: senin" << endl; break;
        case 3: cout << "Kemarin adalah hari: selasa" << endl; break;
        case 4: cout << "Kemarin adalah hari: rabu" << endl; break;
        case 5: cout << "Kemarin adalah hari: kamis" << endl; break;
        case 6: cout << "Kemarin adalah hari: jumat" << endl; break;
        case 7: cout << "Kemarin adalah hari: sabtu" << endl; break;
        default: cout << "Hari tidak valid!" << endl;
    }
}

int main() {
    string hari;
    cout << "Masukkan hari sekarang: ";
    cin >> hari;

    TampilkanHariBesok(hari);
    return 0;
}
