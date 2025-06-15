#include <iostream>
#include <cstring> 
using namespace std;

int karakterToInteger(char c) {
    return c - '0';
}

int konversiStringToInt(const char s[]) {
    int n = 0;
    int pengali = 1;
    for (int i = strlen(s) - 1; i >= 0; i--) {
        n += karakterToInteger(s[i]) * pengali;
        pengali *= 10;
    }
    return n;
}

int main() {
    char input[100];
    cout << "Masukkan bilangan dalam bentuk string: ";
    cin >> input;
    int hasil = konversiStringToInt(input);
    cout << "Hasil konversi ke integer: " << hasil << endl;
    return 0;
}
