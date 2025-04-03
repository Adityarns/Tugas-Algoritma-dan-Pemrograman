#include <iostream>
using namespace std;

int main() {
    int N, i, k;
    double jumlah;
    cout << "Masukkan banyak data: ";
    cin >> N;
    jumlah = 0.0;
    i = 1;
    k = 1;
    while(k <= N){
        if(i % 2 == 1){
            jumlah = jumlah + 1.0/k;
        }
        else{
            jumlah = jumlah - 1.0/k;
        }
        i += 1;
        k += 2;
    }
    cout << "Jumlah: " << jumlah << endl;
    return 0;
}
