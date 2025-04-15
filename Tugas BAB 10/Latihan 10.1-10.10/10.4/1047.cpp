#include <iostream>
using namespace std;

void hitungRatarata(int N, double& u){
    int jumlah, x, k;
    jumlah = 0;
    for (k = 1; k <= N; k++){
        cout << "Masukkan nilai: ";
        cin >> x;
        jumlah += x;
    }
    u = (double)jumlah / N;
}

int main(){
    int N;
    double rataRata;
    hitungRatarata(3, rataRata);
    cout << "Rata-rata dari 3 bilangan adalah: " << rataRata << endl;
    return 0;
}
