#include <iostream>
using namespace std;

int main(){
    int A, B, C, max;
    cout << "--Menentukan bilangan terbesar--" << endl;
    cout << "Masukkan bilangan 1: ";
    cin >> A;
    cout << "Masukkan bilangan 2: ";
    cin >> B;
    cout << "Masukkan bilangan 3: ";
    cin >> C;

    if(A > B){
        max = A;
    }
    else{
        max = B;
    }
    if(C > max){
        max = C;
    }
    cout <<"Bilangan terbesar: " << max << endl;
    
    return 0;
}