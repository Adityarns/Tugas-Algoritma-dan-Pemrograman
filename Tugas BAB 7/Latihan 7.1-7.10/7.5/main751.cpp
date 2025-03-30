#include <iostream>
using namespace std;

int main(){
    int angka;

    cout << "Masukkan angka: ";
    cin >> angka;
    
    if(angka == 1){
        cout << "Satu" << endl;
    }
    else if(angka == 2){
        cout << "Dua" << endl;
    }
    else if(angka == 3){
        cout << "Tiga" << endl;
    }
    else if(angka == 4){
        cout << "Empat" << endl;
    }
    else{
        cout << "Angka yang dimasukkan harus 1s/d4" << endl;
    }
    return 0;
}   