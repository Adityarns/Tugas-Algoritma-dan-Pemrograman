#include <iostream>
using namespace std;

int main() {
    int N;
    int jumlah = 0;
    int bilanganGanjil = 1;
    cout << "Masukkan nilai N: ";
    cin >> N;
    for (int i = 0; i < N; i++) {
        jumlah += bilanganGanjil;
        bilanganGanjil += 2;
    }
    cout << "Jumlah " << N << " bilangan ganjil: " << jumlah << endl;
    return 0;
}