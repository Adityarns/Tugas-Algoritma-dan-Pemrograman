#include <iostream>
#include <string>
using namespace std;

string BalikKarakter(const string& s) {
    string sb = "";
    for (int i = s.length() - 1; i >= 0; i--) {
        sb += s[i];
    }
    return sb;
}

int main() {
    string input;
    cout << "Masukkan string: ";
    getline(cin, input);
    string hasil = BalikKarakter(input);
    cout << "String yang dibalik: " << hasil << endl;
    return 0;
}
