#include <iostream>
using namespace std;

int main(){
    int i, N, max = 100; 
    int A[max];
    cout << "Masukkan nilai N: ";
    cin >> N;
    
    for(i = 1; i <= N; i++){
        A[i] = i;
        cout << A[i] << endl;
    }
    return 0;
}