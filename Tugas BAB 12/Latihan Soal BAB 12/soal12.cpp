#include <iostream>
#include <string>
using namespace std;

// Fungsi untuk menyalin substring dari string s mulai dari indeks i sebanyak n karakter
string salinSubstring(const string& s, int i, int n) {
    if (i >= s.length()) {
        return ""; // string kosong
    }

    return s.substr(i, n); // substr otomatis menyesuaikan jika n terlalu besar
}

int main() {
    string s = "pemrograman";
    int i = 3;
    int n = 5;

    string hasil = salinSubstring(s, i, n);
    cout << "Hasil salinan: " << hasil << endl;  // Output: "rogram"

    return 0;
}
