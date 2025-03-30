#include <iostream>
using namespace std;

string kategoriUmur(int umur) {
    if (umur >= 0 && umur <= 5) return "Balita";
    else if (umur > 5 && umur <= 12) return "Anak-anak";
    else if (umur > 12 && umur <= 20) return "Remaja";
    else if (umur > 20 && umur <= 60) return "Dewasa";
    else return "Lansia";
}

int main() {
    int umur;
    cout << "Masukkan umur: ";
    cin >> umur;

    cout << "Kategori umur: " << kategoriUmur(umur) << endl;
    return 0;
}
