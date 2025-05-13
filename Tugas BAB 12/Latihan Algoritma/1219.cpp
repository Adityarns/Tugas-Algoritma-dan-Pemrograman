#include <iostream>
using namespace std;

void CariMinVersi2(int A[], int N, int &idxMin){
    idxMin = 1;
    for (int i = 1; i < N; i++) {
        if (A[i] < A[idxMin]) {
            idxMin = i;
        }
    }
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
    
    int idxMin;
    CariMinVersi2(A, N, idxMin);
    cout << "Nilai minimum adalah: " << A[idxMin] << endl;
    return 0;
}