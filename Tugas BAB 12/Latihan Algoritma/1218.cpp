#include <iostream>
using namespace std;

void CariMinVersi2(int A[], int N, int &min){
    min = A[0];
    for (int i = 1; i < N; i++) {
        if (A[i] < min) {
            min = A[i];
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
    
    int min;
    CariMinVersi2(A, N, min);
    cout << "Nilai minimum adalah: " << min << endl;
    return 0;
}