#include <iostream>
#include <string>

using namespace std;

void Start();
void showMenuUtama();
void showMenuAtm();
void showMenuKalkulator();
void showMenuEcommerce();
void showMenuGame();

void buatAkun();
void inputlogin();

int main(){
    Start();
    return 0;
}

/////////////////////////////////////////////////////////////////// LOGIN
void Start(){
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


// Batas maksimum akun yang bisa didaftarkan
const int maxUser = 100; 

// Array untuk menyimpan usernames dan sandi
string usernames[maxUser];
string sandi[maxUser];

// Variabel untuk melacak jumlah akun yang sudah terdaftar
int akunTerdaftar = 0; 

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
                break;
            }
        }
        if (loginSukses){
            showMenuUtama();
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
    akunTerdaftar++; // Tingkatkan jumlah akun yang terdaftar
    
    cout << "Akun berhasil dibuat!" << endl;
}


//////////////////////////////////////////////////////////// MENU UTAMA
void showMenuUtama(){
    int userInput2;
    do {
        cout << "\n--- MENU UTAMA ---" << endl;
        cout << "1. ATM" << endl;
        cout << "2. KALKULATOR" << endl;
        cout << "3. E-COMMERCE" << endl;
        cout << "4. GAME" << endl;
        cout << "Jawaban: ";
        cin >> userInput2;
        
        switch (userInput2) {
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
    } while (userInput2 != 3); // Ulangi menu sampai user memilih keluar
}

///////////////////////////////////////////////////// ATM
void showMenuAtm(){
    int userInput3, saldo = 10000, transfer, tarikTunai, topUp;
    do {
        cout << "\n--- ATM ---" << endl;
        cout << "SALDO ANDA:  " << saldo << endl;
        cout << "1. TRANSFER " << endl;
        cout << "2. TOP UP" << endl;
        cout << "3. TARIK TUNAI " << endl;
        cout << "Jawaban: ";
        cin >> userInput3;
        
        switch (userInput3) {
            case 1:
                cout << "Masukkan Jumlah uang yang ingin di transfer: ";
                cin >> transfer;
                saldo -= transfer;
                break;
            case 2:
                cout << "Masukkan jumlah uang yang ingin di masukkan: ";
                cin >> topUp;
                saldo += topUp;
                break;
            case 3:
                cout << "Masukkan jumlah uang yang ingin diambil: ";
                cin >> tarikTunai;
                saldo -= tarikTunai;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
                break;
        }
    } while (userInput3 != 3); // Ulangi menu sampai user memilih keluar
    
}
void showMenuKalkulator(){

}
void showMenuEcommerce(){

}
void showMenuGame(){

}


