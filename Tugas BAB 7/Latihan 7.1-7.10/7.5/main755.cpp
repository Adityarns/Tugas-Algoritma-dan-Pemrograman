#include <iostream>
#include <string>
using namespace std;

int main(){
    const int jamNormal = 48;
    const int upahLembur = 3000;
    string nama;
    char golongan;
    int jjk, lembur,upahPerJam, upahTotal;
    
    cout << "Masukkan nama: ";
    cin >> nama;
    cout << "Masukkan golongan: ";
    cin >> golongan;
    cout << "Masukkan jumah jam kerja: ";
    cin >> jjk;

    if(golongan = 'A'){
    upahPerJam = 4000;
    }
    else if(golongan = 'B'){
    upahPerJam = 5000;
    }
    else if(golongan = 'C'){
    upahPerJam = 6000;
    }
    else if(golongan = 'D'){
    upahPerJam = 7500;
    }

    if(jjk <= jamNormal){
        upahTotal = jjk * upahPerJam;
    }
    else {
        lembur = jjk - jamNormal;
        upahTotal = jamNormal * upahPerJam + lembur * upahLembur;
    }
    cout << "Upah: " << upahTotal << endl;

    return 0;
}