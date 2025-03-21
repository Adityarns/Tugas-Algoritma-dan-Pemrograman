#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char ibk[10];

    cout << "Masukkan nama ibukota di Jawa: ";
    cin >> ibk;
    if(strcmp(ibk,"serang") == 0){
        cout << "Provinsi:  Banten" << endl;
    }
    else if(strcmp(ibk,"Jakarta") == 0){
        cout << "Provinsi: DKI Jakarta" <<  endl;
    }
    else if(strcmp(ibk,"Bandung") == 0){
        cout << "Provinsi: Jawa Barat" <<  endl;
    }
    else if(strcmp(ibk,"Semarang") == 0){
        cout << "Provinsi: Jawa Tengah" <<  endl;
    }
    else if(strcmp(ibk,"Yogyakarta") == 0){
        cout << "Provinsi: DI Yogyakarta" <<  endl;
    }
    else if(strcmp(ibk,"Surabaya") == 0){
        cout << "Provinsi: Jawa Timur" <<  endl;
    }

    return 0;
}