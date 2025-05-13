#include <iostream>
using namespace std;

const int Nmaks = 100;
typedef int LarikInt[Nmaks+1];

void BacaLarik(LarikInt A, int N);
void CetakLarikVersi1(LarikInt A, int N);
void HitungRataRata(LarikInt A, int N, float *u);

int main(){
    LarikInt A;
    int k;
    int N;
    float u;
    cout << "Berapa jumlah data (N): "; 
    cin >> N;
    cout << "Baca data: " << endl;
    BacaLarik(A, N);
    cout << "Cetak data: " << endl;
    CetakLarikVersi1(A,N);
    cout << "Hitung rata-rata: " << endl;
    HitungRataRata(A, N, &u);
    cout << "Rata-rata: " << u << endl;
    return 0;
}

void BacaLarik(LarikInt A, int N){
    int i;
    for (i = 1; i <= N; i++){
        cout << "Masukkan nilai A[" << i << "]: ";
        cin >> A[i];
    }
}

void CetakLarikVersi1(LarikInt A, int N){
    int i;
    for (i = 1; i <= N; i++){
        cout << "A[" << i << "]: " << A[i] << endl;
    }
}

void HitungRataRata(LarikInt A, int N, float *u){
    int i;
    float jumlah;
    i = 1;
    jumlah = 0;
    for (i; i <= N; i++){
        jumlah += A[i];
    }
    *u = jumlah/N;
}
