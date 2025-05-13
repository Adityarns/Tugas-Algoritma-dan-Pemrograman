#include <iostream>
using namespace std;

int Maxlarik3(int A[], int N, int &idxMaks){
    idxMaks = 1;
    for (int i = 1; i < N; i++) {
        if (A[i] > A[idxMaks]) {
            idxMaks = i;
        }
    }
    return idxMaks;
}

int main(){
    int N;
    cout << "Masukkan jumlah elemen: ";
    cin >> N;
    
    int A[N];
    for (int i = 0; i < N; i++) {
        cout << "Masukkan elemen array: ";
        cin >> A[i];
    }
    
    int idxMaks;
    Maxlarik3(A, N, idxMaks);
    cout << "Nilai maksimum adalah: " << A[idxMaks] << endl;
    return 0;
}