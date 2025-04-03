#include <iostream>
using namespace std;

int main() {
    int N;
    
    cout << "Masukkan jumlah anak ayam: ";
    cin >> N;
    cout << "Anak Ayam Turun " << N << endl;
    for (int i = N; i >= 2; i--) {
        cout << "Anak ayam turun " << i << ", mati satu tinggal " << i - 1 << endl;
    }
    cout << "Anak ayam turun 1, mati satu tinggal induknya." << endl;
    return 0;
}
