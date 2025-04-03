#include <iostream>
using namespace std;

int main() {
    char karakter;
    cout << "Masukkan karakter (titik untuk berhenti): ";
    cin >> karakter;
    while (karakter != '.') {
        cout << "Masukkan karakter (titik untuk berhenti): ";
        cin >> karakter;
    }
    cout << endl; 
    return 0;
}