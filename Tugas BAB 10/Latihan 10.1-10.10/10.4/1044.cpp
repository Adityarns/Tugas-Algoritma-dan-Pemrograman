#include <iostream>
#include <cmath>
using namespace std;

void hitungPersegiPanjang(int pilihanMenu){
    double panjang, lebar, luas ,keliling, diagonal;
    switch (pilihanMenu){
    case 1:
        cout << "Masukkan panjang: ";
        cin >> panjang;
        cout << "Masukkan lebar: ";
        cin >> lebar;
        luas = panjang * lebar;
        cout << "Luas persegi panjang: " << luas << endl;
        break;
    case 2:
        cout << "Masukkan panjang: ";
        cin >> panjang;
        cout << "Masukkan lebar: ";
        cin >> lebar;
        keliling = (2 * panjang) + (2 * lebar);
        cout << "Keliling persegi panjang: " << keliling << endl;
        break;   
    case 3:
        cout << "Masukkan panjang: ";
        cin >> panjang;
        cout << "Masukkan lebar: ";
        cin >> lebar;
        diagonal = sqrt((panjang * panjang) + (lebar * lebar));
        cout << "Diagonal persegi panjang: " << diagonal << endl;
        break;
    case 4:
        cout << "Keluar dari program" <<  endl;
        break;
    default:
        cout << "Pilihan tidak valid" << endl;
        break;
    }
}
void cetakMenu(){
    cout << "MENU EMPAT PERSEGI PANJANG" << endl;
    cout << "1. Hitung Luas Persegi Panjang" << endl;
    cout << "2. Hitung Keliling Persegi Panjang" << endl;
    cout << "3. Hitung Diagonal Persegi Panjang" << endl;
    cout << "4. Keluar" << endl;
}
int main(){
    int pilihanMenu;
    cetakMenu();
    cout << "Masukkan pilihan menu: ";
    cin >> pilihanMenu;
    hitungPersegiPanjang(pilihanMenu);
    return 0;
}