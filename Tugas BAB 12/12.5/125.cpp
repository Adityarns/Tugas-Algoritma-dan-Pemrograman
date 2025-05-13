#include <iostream>
using namespace std;

int main(){
    int i, x, N, A[N];
    i = 0;
    cout << "Masukkan x: ";
    cin >> x;
    while(x != 9999){
        i += 1;
        x = A[i];
        cout << "Masukkan x: ";
        cin >> x;
    } 
    N = i;
    return 0;
}