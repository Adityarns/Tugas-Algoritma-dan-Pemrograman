#include <iostream>
#include <string>
#include <fstream>
#include "calculator.cpp"
#include "game.cpp"
#include "Ecommerce.cpp"
#include "global.hpp"

using namespace std;

void buatAkun();
void inputlogin();
void simpanDataAkun();
void muatDataAkun();

/////////////////////////////////////////////////////////////////// LOGIN
void Start(){
    muatDataAkun();
    int userInput;
    do {
        cout << "\n--- Selamat Datang ---" << endl;
        cout << "1. Login" << endl;
        cout << "2. Buat akun baru" << endl;
        cout << "3. Keluar" << endl;
        cout << "Jawaban: ";
        cin >> userInput;
        
        switch (userInput) {
            case 1:
                inputlogin();
                break;
            case 2:
                buatAkun();
                break;
            case 3:
                cout << "Terima kasih telah menggunakan aplikasi ini!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
                break;
        }
    } while (userInput != 3); // Ulangi menu sampai user memilih keluar    
}

void showMenuUtama(){
    int userInput1;
    do {
        cout << "\n--- MENU UTAMA ---" << endl;
        cout << "1. ATM" << endl;
        cout << "2. Calculator" << endl;
        cout << "3. GO-Food" << endl;
        cout << "4. Game" << endl;
        cout << "5. Keluar" << endl;
        cout << "Jawaban: ";
        cin >> userInput1;
        
        switch (userInput1) {
            case 1:
                showMenuAtm();
                break;
            case 2:
                showMenuKalkulator();
                break;
            case 3:
                showMenuEcommerce();
                break;
            case 4:
                showMenuGame();
                break;
            case 5:
                cout << "Terima kasih telah menggunakan aplikasi ini!" << endl;
                exit(0); // Keluar dari program
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
                break;
        }
    } while (userInput1 != 5); // Ulangi menu sampai user memilih keluar    
}

// Batas maksimum akun yang bisa didaftarkan
// const int maxUser = 100; 

// Array untuk menyimpan usernames dan sandi
string usernames[maxUser];
string sandi[maxUser];
ATM dataATM[maxUser];

// Variabel untuk melacak jumlah akun yang sudah terdaftar
int akunTerdaftar = 0;
int akunAktif = 0; 

void inputlogin (){
    int i = 0;
    string inputNama, inputSandi;
    bool loginSukses = false;
    while (i < 3){
        
        cout << "\n----------LOGIN----------" << endl;
        cout << "Masukkan Username: ";
        cin >> inputNama;
        cout << "Masukkan sandi: ";
        cin >> inputSandi;
        
        for(int i = 0; i < akunTerdaftar; i++){
            if(usernames[i] == inputNama && sandi[i] == inputSandi){
                cout << "Login sukses.." << endl;
                loginSukses = true;
                akunAktif = i;
                break;
            }
        }
        if (loginSukses){
            showMenuUtama();
            return; // Keluar dari fungsi setelah sukses login
        }
        else{
            cout << "Username atau sandi salah, silahkan ulangi.." << endl;
            i++;
        }
    }
}


void buatAkun(){
    cout << "----------BUAT AKUN----------" << endl;
    
    // Cek apakah array sudah penuh
    if (akunTerdaftar >= maxUser) {
        cout << "Maaf, kapasitas akun sudah penuh (" << maxUser << "). Tidak bisa membuat akun baru." << endl;
        return; 
    }
    
    string newUsername, newPassword;
    cout << "Masukkan Username baru: ";
    cin >> newUsername;
    
    // Cek apakah username sudah ada
    for (int i = 0; i < akunTerdaftar; ++i) {
        if (usernames[i] == newUsername) {
            cout << "Username sudah terdaftar. Silakan gunakan username lain." << endl;
            return; // Kembali tanpa membuat akun
        }
    }
    
    cout << "Masukkan Sandi baru: ";
    cin >> newPassword;
    
    // Tambahkan akun baru ke array
    usernames[akunTerdaftar] = newUsername;
    sandi[akunTerdaftar] = newPassword;
    dataATM[akunTerdaftar].saldo = 10000;
    akunTerdaftar++; // Tingkatkan jumlah akun yang terdaftar
    simpanDataAkun();
    
    cout << "Akun berhasil dibuat!" << endl;
}

void simpanDataAkun() {
    ofstream file("akun.txt");
    if (file.is_open()) {
        for (int i = 0; i < akunTerdaftar; ++i) {
            file << usernames[i] << " " << sandi[i] << " " << dataATM[i].saldo << endl;
        }
        file.close();
    } else {
        cout << "Gagal menyimpan data akun ke file.\n";
    }
}


void muatDataAkun() {
    ifstream file("akun.txt");
    string uname, pass;
    int saldo;
    akunTerdaftar = 0;
    if (file.is_open()) {
        while (file >> uname >> pass >> saldo && akunTerdaftar < maxUser) {
            usernames[akunTerdaftar] = uname;
            sandi[akunTerdaftar] = pass;
            dataATM[akunTerdaftar].saldo = saldo;
            akunTerdaftar++;
        }
        file.close();
    } else {
        cout << "(Info: File akun.txt belum tersedia. Akan dibuat setelah akun ditambahkan.)\n";
    }
}

