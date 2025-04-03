#include <iostream>
using namespace std;

int main() {
    int N;
    int jumlah = 0;
    cout << "Masukkan nilai N: ";
    cin >> N;
    for (int i = 1; i <= N; i += 2) {
        jumlah += 1;
    }
    cout << "Jumlah bilangan ganjil dari 1 sampai " << N << " adalah: " << jumlah << endl;
    return 0;
}