#include <iostream>
using namespace std;

int main(){
    int i, N , max = 100;
    cout << "Masukkan nilai N: ";
    cin >> N;
    int A[max];
    for(i = 0; i < N; i++){
        A[i] = 0;
    }
    for(i = 0; i < N; i++){
        cout << A[i] << endl;
    }
    return 0;
}