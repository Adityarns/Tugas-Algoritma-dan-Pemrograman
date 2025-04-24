#include <iostream>
using namespace std;

int main(){
    int N, jumlah = 0, bilanganGanjil = 1;
    cout << "Masukkan nilai N: ";
    cin >> N;
    for(int i =0; i < N; i++){
        jumlah += bilanganGanjil;
        bilanganGanjil += 2;
    }
    cout << "Jumlah bilangan " << N << " Ganjil pertama adalah " << jumlah << endl;
    return 0;
}