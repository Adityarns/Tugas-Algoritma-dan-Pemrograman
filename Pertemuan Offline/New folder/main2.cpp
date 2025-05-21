#include <iostream>
using namespace std;

void luasSegitiga(){
    int a, t;
    double c = 0;
    cout << "Masukkan Alas: ";
    cin >> a;
    cout << "Masukkan Tinggi: ";
    cin >> t;
    c = 0.5 * a * t;
    cout << "Luas Segitiga: " << c << endl;
    
}
void luasLingkaran(){
    int r;
    double c = 0;
    cout << "Masukkan Jari-Jari: ";
    cin >> r;
    
    c = 3.14 * r * r;
    cout << "Luas Lingkaran: " << c << endl;
    
}
void luasJajargenjang(){
    int a, t;
    double c = 0;
    cout << "Masukkan Alas: ";
    cin >> a;
    cout << "Masukkan Tinggi: ";
    cin >> t;
    c = a * t;
    cout << "Luas Jajar Genjang: " << c << endl;
    
}
void luasLayanglayang(){
    int d1, d2;
    double c;
    cout << "Masukkan Diagonal-1: ";
    cin >> d1;
    cout << "Masukkan Diagonal-2: ";
    cin >> d2;
    c = 0.5 * d1 * d2;
    cout << "Luas Layang-layang: " << c << endl;
    
}


void tambahkanGaris(){
    cout << "------------------------------" << endl;
}

void selamatTinggal(){
    cout << "Terima kasih sudah menggunakan program ini" << endl;
}

void inputan(){
    int inputUser;
    cout << "Masukkan pilihan anda: ";
    cin >> inputUser;
    if(inputUser == 1){
        luasSegitiga();
    }
    else if (inputUser == 2){
        luasLingkaran();
    }
    else if (inputUser == 3){
        luasJajargenjang();
    }
    else if (inputUser == 4){
        luasLayanglayang();
    }
    else if (inputUser == 5){
        exit;
    }
    else{
        cout << "Pilihan tidak valid..";
        exit;
    }
}

void tampilkanMenu(){
    tambahkanGaris();
    cout <<"=====MENU MENGHITUNG LUAS=====" << endl;
    tambahkanGaris();
    cout <<"1. Segitiga" << endl;
    cout <<"2. Lingkaran" << endl;
    cout <<"3. Jajar Genjang" << endl;
    cout <<"4. Layang-layang" << endl;
    cout <<"5. Keluar" << endl;
    inputan();
    tambahkanGaris();
    selamatTinggal();
    tambahkanGaris();
}


int main(){
    tampilkanMenu();
    return 0;
}