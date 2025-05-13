#include <iostream>
#include <string>
using namespace std;

void HitungIndexNilai(int nilUjian[], int N, char index[]) {
    for (int i = 0; i < N; i++) {
        if (nilUjian[i] >= 80) {
            index[i] = 'A';
        } else if (nilUjian[i] >= 70 && nilUjian[i] < 80) {
            index[i] = 'B';
        } else if (nilUjian[i] >= 55 && nilUjian[i] < 70) {
            index[i] = 'C';
        } else if (nilUjian[i] >= 45 && nilUjian[i] < 55) {
            index[i] = 'D';
        } else {
            index[i] = 'E';
        }
    }
}
int main() {
    int N;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> N;

    int nilUjian[N];
    char index[N];

    cout << "Masukkan nilai ujian:\n";
    for (int i = 0; i < N; i++) {
        cout << "Nilai mahasiswa ke-" << i + 1 << ": ";
        cin >> nilUjian[i];
    }

    HitungIndexNilai(nilUjian, N, index);

    cout << "\nHasil indeks nilai:\n";
    for (int i = 0; i < N; i++) {
        cout << "Mahasiswa ke-" << i + 1 << ": Nilai = " << nilUjian[i] << ", Indeks = " << index[i] << endl;
    }

    return 0;
}
