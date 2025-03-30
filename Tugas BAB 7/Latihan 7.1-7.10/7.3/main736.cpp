#include <iostream>
#include <string>
using namespace std;

int main(){
    string nama;
    int JJK, lembur, upah;

    cout << "Masukkan nama: ";
    cin >> nama;
    cout << "Masukkan Jam kerja: ";
    cin >> JJK;

    if (JJK <= 48){
        upah = JJK * 2000;
    }
    else {
        lembur = JJK - 48;
        upah = 48 * 2000 + lembur * 3000;
    }
    cout << "Upah karyawan: Rp." << upah << endl;
    return 0;
}