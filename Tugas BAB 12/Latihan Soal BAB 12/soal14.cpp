#include <iostream>
#include <string>
using namespace std;

string hapusKarakter(const string& s, char c) {
    string hasil = "";
    for (char ch : s) {
        if (ch != c) {
            hasil += ch;
        }
    }
    return hasil;
}

int main() {
    string s = "programming";
    char c = 'g';

    string hasil = hapusKarakter(s, c);
    cout << "Setelah menghapus '" << c << "': " << hasil << endl;

    return 0;
}
