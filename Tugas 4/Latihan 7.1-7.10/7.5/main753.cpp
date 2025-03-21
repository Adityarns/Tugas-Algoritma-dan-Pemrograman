#include <iostream>
using namespace std;

int main(){
    int x;

    cout << "Masukkan nilai x: ";
    cin >> x;

    switch (x % 2){
    case 0: 
        cout << "genap" <<  endl;
        break;

    case 1: 
        cout << "ganjil" <<  endl;
        break;

    }
    return 0;
}