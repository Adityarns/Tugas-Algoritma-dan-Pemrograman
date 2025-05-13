#include <iostream>
using namespace std;

void CariMaksVersi1(int A[], int N, int &Maks){
    Maks = -9999;
    for (int i = 1; i < N; i++) {
        if (A[i] > Maks) {
            Maks = A[i];
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
    
    int maks;
    CariMaksVersi1(A, N, maks);
    cout << "Nilai maksimum adalah: " << maks << endl;
    return 0;
}