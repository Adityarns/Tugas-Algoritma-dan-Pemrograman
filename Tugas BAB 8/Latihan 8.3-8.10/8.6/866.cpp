#include <iostream>
#include <string>
using namespace std;

int main (){
    const int jamNormal = 48;
    const int UpahLembur = 3000;
    int upahPerjam,jjk;
    double lembur, upahTotal;
    string nama;
    char gol, jawab;

    do{
        cout << "Masukan nama: ";
        cin >> nama;
        cout << "Masukan gol: ";
        cin >> gol;
        cout << "Masukan jjk: ";
        cin >> jjk;
        switch (gol)
        {
        case 'A':
            upahPerjam = 4000;
            break;
        case 'B':
            upahPerjam = 5000;
            break;
        case 'C':
            upahPerjam = 6000;
            break;
        case 'D':
            upahPerjam = 7500;
            break;
        default:
            break;
        }

        if(jjk <= jamNormal){
            upahTotal = jjk * upahPerjam;
        }
        else{
            lembur = jjk - jamNormal;
            upahTotal = jamNormal * upahPerjam + lembur * UpahLembur;
        }
        cout << "Upah total: " << upahTotal << endl;
        cout << "Ulani untuk karyawan yang lain(y/t): ";
        cin >> jawab;
    } while( jawab != 't');
    return 0;
}