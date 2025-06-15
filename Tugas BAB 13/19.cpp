#include <iostream>
#include <string>
using namespace std;

void BalikString(string &s) {
    int i = 0;
    int j = s.length() - 1;
    char temp;
    while (i < j) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
}

int main() {
    string s;
    cout << "Masukkan string: ";
    cin >> s;
    BalikString(s);
    cout << "String setelah dibalik: " << s << endl;
    return 0;
}
