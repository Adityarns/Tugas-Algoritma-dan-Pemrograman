#include <iostream>
#include <string>
using namespace std;

int main(){
    const int jamNormal = 48;
    const int upahPerjam = 2000;
    const int upahLembur = 3000;

    string nama;
    int JJK, lembur, upah;

    cout << "Masukkan nama: ";
    cin >> nama;
    cout << "Masukkan Jam kerja: ";
    cin >> JJK;

    if (JJK <= jamNormal){
        upah = JJK * upahPerjam;
    }
    else {
        lembur = JJK - jamNormal;
        upah = jamNormal * upahPerjam + lembur * upahLembur;
    }
    cout << "Upah karyawan: Rp." << upah << endl;
    return 0;
}