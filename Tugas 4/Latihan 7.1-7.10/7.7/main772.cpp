#include <iostream>
using namespace std;

int main() {
    struct Jam {
        int hh; 
        int mm; 
        int ss; 
    };

    Jam J1, J2, J3;

    cout << "Masukkan jam awal (hh mm ss): ";
    cin >> J1.hh >> J1.mm >> J1.ss;

    cout << "Masukkan jam akhir (hh mm ss): ";
    cin >> J2.hh >> J2.mm >> J2.ss;

    if (J2.ss >= J1.ss) {
        J3.ss = J2.ss - J1.ss;
    } else {
        J3.ss = (J2.ss + 60) - J1.ss;
        J2.mm -= 1; 
    }

    if (J2.mm >= J1.mm) {
        J3.mm = J2.mm - J1.mm;
    } else {
        J3.mm = (J2.mm + 60) - J1.mm;
        J2.hh -= 1; 
    }

    if (J2.hh >= J1.hh) {
        J3.hh = J2.hh - J1.hh;
    } else {
        J3.hh = (J2.hh + 24) - J1.hh; 
    }

    cout << "Durasi: " << J3.hh << " jam " << J3.mm << " menit " << J3.ss << " detik" << endl;

    return 0;
}
