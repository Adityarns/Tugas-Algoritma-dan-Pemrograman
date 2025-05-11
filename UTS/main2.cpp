#include <iostream>
using namespace std;

void LuasPersegiPanjang(int a, int b){
    int c = a * b;
    cout << "Nilai Luas persegi panjang: " << c;
}

int main(){
    int p, l;
    cout << "Masukkan panjang: ";
    cin >> p;
    cout << "Masukkan lebar: ";
    cin >> l;
    LuasPersegiPanjang(p,l);
    return 0;
}