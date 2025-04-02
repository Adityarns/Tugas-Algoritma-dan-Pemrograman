#include <iostream>
using namespace std;

int main (){
    int nomorMenu;
    bool stop;

    stop = false;
    while(not stop){
        cout << "   Menu    " <<  endl;
        cout << "1. Baca data" << endl;
        cout << "2. Cetak data" << endl;
        cout << "3. Ubah data" << endl;
        cout << "4. Hapus data" << endl;
        cout << "5. Keluar program" << endl;
        cout << "Masukkan Pilihan(1/2/3/4/5): ";
        cin >> nomorMenu;

        switch (nomorMenu)
        {
        case 1:
            cout << "Anda memilih menu nomor 1" << endl;
            break;
        case 2:
            cout << "Anda memilih menu nomor 2" << endl;
            break;
        case 3:
            cout << "Anda memilih menu nomor 3" << endl;
            break;
        case 4:
            cout << "Anda memilih menu nomor 4" << endl;
            break;
        case 5:
            cout << "Keluar Program" << endl;
            stop = true;
            break;
        default:
            cout << "Nomor pilihan anda salah" << endl;
            break;
        }  
    } 
    return 0;
}