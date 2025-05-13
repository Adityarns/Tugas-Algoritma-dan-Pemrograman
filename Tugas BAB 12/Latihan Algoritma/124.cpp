#include <iostream>
using namespace std;

int main(){
    int i, N, A[100];
    cout << "Masukkan nilai N: ";
    cin >> N;
    
    for(i = 1; i <= N; i++){
        A[i] = i;
    }
    for(i = 1; i <= N; i++){
        cout << A[i] << endl;
    }
    return 0;
}