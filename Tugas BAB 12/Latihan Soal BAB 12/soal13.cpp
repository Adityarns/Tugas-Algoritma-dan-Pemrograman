#include <iostream>
#include <string>
using namespace std;

string gabungString(const string& s1, const string& s2) {
    return s1 + s2;
}

int main() {
    string s1 = "Algoritma";
    string s2 = " dan Pemrograman";

    string hasil = gabungString(s1, s2);
    cout << "Hasil penggabungan: " << hasil << endl;

    return 0;
}
