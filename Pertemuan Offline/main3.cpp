#include <iostream>
#include <string>
using namespace std;

int main(){
    string Mahasiswa[4]; 
    float IPK = 0;
    cout << "Masukkan NIM Mahasiswa: ";
    cin >> Mahasiswa[0];
    cout << "Masukkan Nama Mahasiswa: ";
    cin >> Mahasiswa[1];
    cout << "Masukkan Jurusan Mahasiswa: ";
    cin >> Mahasiswa[2];
    cout << "Masukkan IPK Mahasiswa: ";
    cin >> Mahasiswa[3];
    
    IPK = stod(Mahasiswa[3]);

    if(IPK >= 3.5 && IPK <= 4){
        Mahasiswa[3] = "bagusss";
    }
    else if(IPK >= 3 && IPK < 3.5){
        Mahasiswa[3] = "Bagus";
    }
    else{
        Mahasiswa[3] = "ya sudahlah";
    }
    cout << "NIM Mahasiswa: " << Mahasiswa[0] << endl;
    cout << "Masukkan Nama Mahasiswa: " <<  Mahasiswa[1] << endl;
    cout << "Jurusan Mahasiswa: " << Mahasiswa[2] << endl;
    cout << "Masukkan IPK Mahasiswa: " << Mahasiswa[3] << endl;

    return 0;
}