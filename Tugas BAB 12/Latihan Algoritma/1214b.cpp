#include <iostream>
using namespace std;

void CariMaksVersi3(int A[], int N, int &idxMaks){
    idxMaks = 0;
    for (int i = 1; i < N; i++) {
        if (A[i] > A[idxMaks]) {
            idxMaks = i;
        }
    }
}

int main(){
    int N;
    cout << "Masukkan jumlah elemen: ";
    cin >> N;
    
    int* A = new int[N];
    for (int i = 0; i < N; i++) {
        cout << "Masukkan elemen array: ";
        cin >> A[i];
    }
    
    int idxMaks;
    CariMaksVersi3(A, N, idxMaks);
    cout << "Nilai maksimum adalah: " << A[idxMaks] << endl;

    delete[] A; 
    return 0;
}