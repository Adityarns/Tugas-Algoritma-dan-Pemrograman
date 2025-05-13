#include <iostream>
using namespace std;

int main(){
    int x[6];
    int i;
    int jumlah = 0;
    float u;

    for(int i = 0; i < 6; i++){
        cout << "Masukkan angka: ";
        cin >> x[i];
    }
    for(int i = 0; i < 6; i++){
        cout << "Angka: " << x[i] << endl;
    }
    for(int i = 0; i < 6; i++){
        jumlah += x[i];
    }

    u = (jumlah) / 6;
    cout << "Nilai rata-rata: " << u << endl;
    return 0;
}