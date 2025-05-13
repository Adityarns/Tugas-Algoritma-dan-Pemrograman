#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string NIM;
    string NamaMhs;
    float IPK;
};

int main() {
    int N; 
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> N;
    cin.ignore(); 
    Mahasiswa Mhs[N]; 

    for (int i = 0; i < N; i++) {
        cout << "Data Mahasiswa ke-" << (i + 1) << endl;

        cout << "NIM        : ";
        getline(cin, Mhs[i].NIM);

        cout << "Nama       : ";
        getline(cin, Mhs[i].NamaMhs);

        cout << "IPK        : ";
        cin >> Mhs[i].IPK;
        cin.ignore(); 

        cout << endl;
    }

    cout << "=== Daftar Mahasiswa ===" << endl;
    for (int i = 0; i < N; i++) {
        cout << "Mahasiswa ke-" << (i + 1) << ": ";
        cout << Mhs[i].NIM << ", " << Mhs[i].NamaMhs << ", IPK: " << Mhs[i].IPK << endl;
    }

    return 0;
}
