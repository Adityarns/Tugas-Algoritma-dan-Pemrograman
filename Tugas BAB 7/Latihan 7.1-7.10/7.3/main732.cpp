#include <iostream>
using namespace std;

int main(){
    int A, B;
    cout << "--Menentukan bilangan terbesar--" << endl;
    cout << "Masukkan bilangan 1: ";
    cin >> A;
    cout << "Masukkan bilangan 2: ";
    cin >> B;

    if(A > B){
        cout << A << " Merupakan bilangan terbesar" << endl;
    }
    else{
        cout << B << " Merupakan bilangan terbesar" << endl;
    }
    return 0;
}