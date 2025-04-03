#include <iostream>
using namespace std;

int main() {
    int N, k, tanda;
    double jumlah;
    cout << "Masukkan banyak data: ";
    cin >> N;
    jumlah = 0.0;
    k = 1;
    tanda = +1;
    
    while(k <= N){
        jumlah = jumlah + (tanda * 1.0/k);
        k += 2;
        tanda = -tanda;
    }
    cout << "Jumlah: " << jumlah << endl;
    return 0;
}
