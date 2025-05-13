#include <iostream>
using namespace std;

int main(){
    int x1, x2, x3, x4, x5, x6;
    float u;
    cout <<"Masukkan angka ke-1: ";
    cin >> x1;
    cout <<"Masukkan angka ke-2: ";
    cin >> x2;
    cout <<"Masukkan angka ke-3: ";
    cin >> x3;
    cout <<"Masukkan angka ke-4: ";
    cin >> x4;
    cout <<"Masukkan angka ke-5: ";
    cin >> x5;
    cout <<"Masukkan angka ke-6: ";
    cin >> x6;
    cout << "\n-----Hasil-----" << endl;
    cout <<"Angka ke-1: " << x1 << endl;
    cout <<"Angka ke-2: " << x2 << endl;
    cout <<"Angka ke-3: " << x3 << endl;
    cout <<"Angka ke-4: " << x4 << endl;
    cout <<"Angka ke-5: " << x5 << endl;
    cout <<"Angka ke-6: " << x6 << endl;
    u = (x1 + x2 + x3 + x4 + x5 + x6) / 6;
    cout << "Nilai rata-rata: " << u << endl;
    return 0;
}