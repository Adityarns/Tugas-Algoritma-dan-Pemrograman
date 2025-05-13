#include <iostream>
using namespace std;

void CariMinVersi2(int A[], int N, int &min, int &max){
    min = A[0];
    max = A[0];
    for (int i = 1; i < N; i++) {
        if (A[i] < min) {
            min = A[i];
        }
        if (A[i] > max) {
            max = A[i];
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
    
    int min, max;
    CariMinVersi2(A, N, min, max);
    cout << "Nilai maksimum adalah\t: " << max << endl;
    cout << "Nilai minimum adalah\t: " << min << endl;
    return 0;
}