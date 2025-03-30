#include <iostream>
using namespace std;

int main(){
    int A, B, C;
    cout << "--Menentukan bilangan terbesar--" << endl;
    cout << "Masukkan bilangan 1: ";
    cin >> A;
    cout << "Masukkan bilangan 2: ";
    cin >> B;
    cout << "Masukkan bilangan 3: ";
    cin >> C;

    if(A > B && A > C){
        cout << "Bilangan terbesar: " << A << endl;
    }
    else{
      if(B > A && B > C){
        cout << "Bilangan terbesar: " << B << endl;
      }
      else{
        cout << "Bilangan terbesar: " << C << endl;
      }
    }
    
    return 0;
}