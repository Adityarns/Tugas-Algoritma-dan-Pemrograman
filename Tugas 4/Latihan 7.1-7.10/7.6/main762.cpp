#include <iostream>
using namespace std;

int main(){
    int A, B;
    cout << "-----Menentukan bilangan terbesar-----";
    cout << "Masukkan A: ";
    cin >> A;
    cout << "Masukkan B: ";
    cin >> B;
    if (A > B){
        cout << "Bilangan terbesar: " << A << endl;
    }
    else {
        cout << "Bilangan terbesar: " <<  B << endl;
    }


    return 0;
}