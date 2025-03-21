#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> kodePos = {
        {"Padang", 25000},
        {"Bandung", 40100},
        {"Solo", 51000},
        {"Denpasar", 72000},
        {"Palu", 92300}
    };

    string kota;
    cout << "Masukkan nama kota: ";
    cin >> kota;

    // Pencarian dalam map
    if (kodePos.find(kota) != kodePos.end()) {
        cout << "Kode Pos: " << kodePos[kota] << endl;
    } else {
        cout << "Kode pos tidak ada di dalam daftar" << endl;
    }

    return 0;
}
