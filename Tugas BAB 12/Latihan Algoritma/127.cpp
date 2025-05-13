#include <iostream>
using namespace std;

int main(){
    int i, x, N, max = 100; 
    int A[max];
    i = 0;
    cout << "Masukkan x: ";
    cin >> x;
    while(x != 9999){
        i += 1;
        A[i] = x;
        cout << "Masukkan x: ";
        cin >> x;
    } 
    N = i;
    cout << "Jumlah data yang dibaca: " << N << endl;
    
        return 0;
}