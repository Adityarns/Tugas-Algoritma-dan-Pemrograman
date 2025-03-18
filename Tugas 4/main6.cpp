#include <iostream>
using namespace std;

struct jam{
    int hh;
    int mm;
    int ss;
};

int main(){
    int sisa, durasi, totalDetik1, totalDetik2;
    jam J1, J2, J3;
    
    cout << "Masukan jam pertama (hh/mm/ss): ";
    cin >> J1.hh >> J1.mm >> J1.ss;
    cout << "Masukan jam kedua (hh/mm/ss): ";
    cin >> J2.hh >> J2.mm >> J2.ss;

    totalDetik1 = (J1.hh * 3600) + (J1.mm * 60) + J1.ss;
    totalDetik2 = (J2.hh * 3600) + (J2.mm * 60) + J2.ss;

    durasi = abs(totalDetik2 - totalDetik1);
    J3.hh = durasi / 3600;
    sisa = durasi % 3600;
    J3.mm = sisa / 60;
    J3.ss = sisa % 60;

    cout << "durasinya: " << J3.hh << " Jam " << J3.mm << " menit " << J3.ss << " Detik " << endl;
    return 0;
}