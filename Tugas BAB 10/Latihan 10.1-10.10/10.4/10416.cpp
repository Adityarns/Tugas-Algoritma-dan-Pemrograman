#include <iostream>
using namespace std;

struct Jam {
    int hh;
    int mm;
    int ss;
};
void JamBerikutnya(Jam &J) {
    int totalDetik = J.hh * 3600 + J.mm * 60 + J.ss;
    totalDetik = (totalDetik + 1) % 86400;

    J.hh = totalDetik / 3600;
    int sisa = totalDetik % 3600;
    J.mm = sisa / 60;
    J.ss = sisa % 60;
}
void CetakDuaDigit(int n) {
    if (n < 10) cout << "0";
    cout << n;
}
int main() {
    Jam J;
    cout << "Masukkan jam awal (hh mm ss): ";
    cin >> J.hh >> J.mm >> J.ss;
    cout << "\nJam hidup dimulai...\n";
    while (true) {
        CetakDuaDigit(J.hh); cout << ":";
        CetakDuaDigit(J.mm); cout << ":";
        CetakDuaDigit(J.ss); cout << endl;
        JamBerikutnya(J);
        for (long i = 0; i < 100000000; ++i); 
    }
    return 0;
}
