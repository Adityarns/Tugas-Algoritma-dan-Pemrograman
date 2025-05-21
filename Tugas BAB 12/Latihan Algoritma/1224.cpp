#include <iostream>
#include <string>
using namespace std;

struct MataKuliah {
    string KodeMK;
    float Nilai;
};

struct Mahasiswa {
    string NIM;
    string Nama;
    MataKuliah MK[4];
};

int main() {
    const int N = 2; 
    Mahasiswa Mhs2[N];

    for (int i = 0; i < N; i++) {
        cout << "Mahasiswa ke-" << i + 1 << endl;
        cout << "NIM  : ";
        cin >> Mhs2[i].NIM;
        cout << "Nama : ";
        cin.ignore();
        getline(cin, Mhs2[i].Nama);

        for (int j = 0; j < 4; j++) {
            cout << "  Mata Kuliah ke-" << j + 1 << endl;
            cout << "  KodeMK : ";
            cin >> Mhs2[i].MK[j].KodeMK;
            cout << "  Nilai  : ";
            cin >> Mhs2[i].MK[j].Nilai;
        }
    }

    cout << "\nData Mahasiswa:\n";
    for (int i = 0; i < N; i++) {
        cout << Mhs2[i].NIM << " - " << Mhs2[i].Nama << endl;
        for (int j = 0; j < 4; j++) {
            cout << "  " << Mhs2[i].MK[j].KodeMK << " : " << Mhs2[i].MK[j].Nilai << endl;
        }
    }

    return 0;
}
