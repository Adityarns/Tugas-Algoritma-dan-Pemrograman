#include <iostream>
using namespace std;

int main (){
    int tahun;
    cout << "--Penghitung tahun kabisat--" << endl;
    cout << "masukkan tahun: ";
    cin >> tahun;
    if(tahun % 4 == 0 && (tahun % 100 == !0 || tahun % 400 == 0)){
        cout << "Tahun " << tahun << " merupakan kabisat" << endl;
    }
    else {
        cout << "Tahun " << tahun << " bukan kabisat" << endl;
    }
    return 0;
}