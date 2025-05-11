#include <iostream>
using namespace std;

int main (){
    int angka[100], idx = 0;

    cout << "Input maximumnya 100" << endl;
    cout << "ketik -1 untuk berhenti." << endl;


    for (idx = 0; idx < 100; idx++){
        cout << "Masukkan Angka ke-" << idx+1 << ": ";
        cin >> angka[idx];
        if(angka[idx] == -1){
            break;
        }

    }
    
    cout << "\n-----Hasil-----" << endl;
    for (idx = 0; idx <= angka[idx]; idx++){
        cout << "Angka ke- " << idx+1 << ": " << angka[idx] << endl; 
    }

    return 0;
}