#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Mahasiswa {
    string nama;
    int NIM;
    float IPK;
};

void cetakMahasiswaIPKDiAtas(Mahasiswa mhs[], int N, float batas) {
    cout << "\nMahasiswa dengan IPK > " << batas << ":\n";
    for (int i = 0; i < N; i++) {
        if (mhs[i].IPK > batas) {
            cout << mhs[i].nama << " (NIM: " << mhs[i].NIM << ", IPK: " << mhs[i].IPK << ")\n";
        }
    }
}

void cetakTertinggiTerendah(Mahasiswa mhs[], int N) {
    if (N == 0) return;

    int idxTinggi = 0, idxRendah = 0;

    for (int i = 1; i < N; i++) {
        if (mhs[i].IPK > mhs[idxTinggi].IPK) {
            idxTinggi = i;
        }
        if (mhs[i].IPK < mhs[idxRendah].IPK) {
            idxRendah = i;
        }
    }

    cout << "\nMahasiswa dengan IPK TERTINGGI:\n";
    cout << mhs[idxTinggi].nama << " (NIM: " << mhs[idxTinggi].NIM << ", IPK: " << mhs[idxTinggi].IPK << ")\n";

    cout << "\nMahasiswa dengan IPK TERENDAH:\n";
    cout << mhs[idxRendah].nama << " (NIM: " << mhs[idxRendah].NIM << ", IPK: " << mhs[idxRendah].IPK << ")\n";
}

int main() {
    Mahasiswa daftar[] = {
        {"Andi", 22001, 3.1},
        {"Budi", 22002, 1.9},
        {"Citra", 22003, 2.5},
        {"Dewi", 22004, 3.8},
        {"Eka", 22005, 2.0}
    };

    int N = sizeof(daftar) / sizeof(daftar[0]);

    cetakMahasiswaIPKDiAtas(daftar, N, 2.0);
    cetakTertinggiTerendah(daftar, N);

    return 0;
}
