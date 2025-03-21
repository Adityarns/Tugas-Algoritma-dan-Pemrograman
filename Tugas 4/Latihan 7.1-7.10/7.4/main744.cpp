#include <iostream>
#include <string>
using namespace std;

int main(){
    string nama;
    int nilai;
    char indeks;

    cout << "Masukkan nama: ";
    cin >> nama;
    cout << "Masukkan nilai: ";
    cin >> nilai;
    
    if(nilai >= 80){
        indeks = 'A';
    }
    else if(nilai >= 70 && nilai < 80){
        indeks = 'B';
    }
    else if(nilai >= 55 && nilai < 70){
        indeks = 'C';
    }
    else if(nilai >= 40 && nilai < 55){
        indeks = 'D';
    }
    else {
        indeks = 'E';
    }

    cout << "\nNama: " << nama << endl;
    cout << "Nilai: " << nilai << endl;
    cout << "Indeks: " << indeks << endl;
    return 0;
}