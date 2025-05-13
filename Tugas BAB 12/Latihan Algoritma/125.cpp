#include <iostream>
using namespace std;

int main(){
    int i, N, max = 100; 
    cout << "Masukkan nilai N: ";
    cin >> N;
    int A[max];
    for (int i = 1; i <= N; i++){
        cout << "Input: ";
        cin >> A[i];
    }
    return 0;
}