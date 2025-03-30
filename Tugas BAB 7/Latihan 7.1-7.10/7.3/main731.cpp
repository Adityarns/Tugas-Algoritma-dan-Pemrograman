#include <iostream>
using namespace std;

int main(){
    int x;
    cout << "--Menentukan apakah bilangan genap atau ganjil--" << endl;
    cout << "Masukkan angka: ";
    cin >> x;

    if(x % 2 == 0){
        cout << x << " Merupakan bilangan genap" << endl;
    }
    else{
        cout << x << " Merupakan bilangan ganjil" << endl;
    }
    return 0;
}