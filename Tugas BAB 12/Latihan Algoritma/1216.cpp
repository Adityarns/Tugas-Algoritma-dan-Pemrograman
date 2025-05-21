#include <iostream>
using namespace std;

const int Nmmax = 100;
typedef int Larik[Nmmax];
int A[Nmmax];
int N;
int imax;

void BacaLarikVersi1(int A[], int N){
    for (int i = 0; i < N; i++) {
        cout << "Masukkan elemen array: ";
        cin >> A[i];
    }
}

void CetakLarik(int A[], int N){
    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}
void CariMaksVersi3(int A[], int N, int &idxMaks){
    idxMaks = 1;
    for (int i = 1; i < N; i++) {
        if (A[i] > A[idxMaks]) {
            idxMaks = A[i];
        }
    }
}

int main(){
    cout << "Masukkan jumlah elemen: ";
    cin >> N;   
    BacaLarikVersi1(A, N);
    CetakLarik(A, N);
    CariMaksVersi3(A, N, imax);
    cout << "Nilai maksimum adalah: " << imax << endl;
    return 0;
}