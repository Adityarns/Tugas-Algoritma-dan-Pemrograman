#include <iostream>
using namespace std;

int cariIndex(int A[], int x){
    for (int i = 0; i < 10; i++){
        if (A[i] == x){
            return i;
        }
    }
    return A[0];
}

int main(){
    int x;
    int A[10] = {10, 90, 30, 70, 80, 20, 60, 50, 40, 100}; 
    cout << "Masukkan angka yang ingin dicari: ";
    cin >> x;
    int Index = cariIndex(A, x);
    cout << "Index dari angka " << x << " adalah: " << Index+1 << endl;
    return 0;
}