#include <iostream>
#include <cstring> 
using namespace std;

int karakterToInteger(char c) {
    return c - '0';
}

int konversiStringToInt(const char s[]) {
    int n = 0;
    for (int i = 0; i < strlen(s); i++) {
        n = 10 * n + karakterToInteger(s[i]);
    }
    return n;
}

int main() {
    char input[100];
    cout << "Masukkan angka dalam bentuk string: ";
    cin >> input;
    int hasil = konversiStringToInt(input);
    cout << "Hasil konversi ke integer: " << hasil << endl;
    return 0;
}
