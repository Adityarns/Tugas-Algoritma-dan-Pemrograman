#include <iostream>
using namespace std;

int main (){
    int angka[10], idx = 0;

    for (idx = 0; idx < 10; idx++){
        cout << "Masukkan Angka ke-" << idx+1 << ": ";
        cin >> angka[idx];
        if(angka[idx] % 2 == 0){
            angka[idx] = 0;
        }
        else if(angka[idx] % 2 != 0){
            angka[idx] = 1;
        }
        else{
            cout << "Unknown" << endl;
        }
    }
    
    cout << "\n-----Hasil-----" << endl;
    for (idx = 0; idx < 10; idx++){
        cout << "Angka ke- " << idx+1 << ": " << angka[idx] << endl; 
    }

    return 0;
}