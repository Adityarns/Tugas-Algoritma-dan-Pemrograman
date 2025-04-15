#include <iostream>
using namespace std;

void SapaPengguna(string nama) {
    cout << "Halo, " << nama << "! Selamat datang di program kami." << endl;
}

int main() {
    string namaPengguna;
    cout << "Masukkan nama Anda: ";
    getline(cin, namaPengguna);

    SapaPengguna(namaPengguna); 

    return 0;
}
