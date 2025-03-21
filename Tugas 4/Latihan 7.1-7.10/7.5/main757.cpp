#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int nomorMenu;
    int panjang, lebar, luas, keliling, diagonal;
    cout << "-----Menu Empat Persegi Panjang-----" << endl;
    cout << "1. Hitung luas" << endl;
    cout << "2. Hitung keliling" << endl;
    cout << "3. Hitung panjang diagonal" << endl;
    cout << "4. Keluar diagonal" << endl;
    cout << "Masukkan pilihan anda (1/2/3/4): ";
    cin >> nomorMenu;

    switch (nomorMenu)
    {
    case 1:
        cout << "Masukkan nilai (panjang/lebar): ";
        cin >> panjang >> lebar;
        luas = panjang * lebar;
        cout << "luas: " << luas << endl;
        break;

    case 2:
        cout << "Masukkan nilai (panjang/lebar): ";
        cin >> panjang >> lebar;
        keliling = 2*panjang + 2*lebar;
        cout << "Keliling: " << keliling << endl;
        break;

    case 3:
        cout << "Masukkan nilai (panjang/lebar): ";
        cin >> panjang >> lebar;
        diagonal = sqrt((2*panjang) + (2*lebar));
        cout << "Panjang diagonal: " << diagonal << endl;
        break;

    case 4:
        cout << "Keluar dari program";
        break;
    
    default:
        cout << "Pilihan tidak valid, silakan pilih kembali. \n" << endl;
        break;
    }


    return 0;
}