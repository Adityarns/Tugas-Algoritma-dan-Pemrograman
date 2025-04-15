#include <iostream>
using namespace std;

void hitungBilGenap(int n, int &jumlah);

int main() {
    int N, hasil;
    cout << "Masukkan nilai N: ";
    cin >> N;
    hitungBilGenap(N, hasil);
    return 0;
}
void hitungBilGenap(int n, int &jumlah){
    int i = 1;
    int x = 0;
    jumlah = 0;
    while(i < n){
        x += 2;
        jumlah += x;
        i++;
    }
    cout << "Jumlah " << n << " bilangan genap pertama adalah " << jumlah << endl;
}