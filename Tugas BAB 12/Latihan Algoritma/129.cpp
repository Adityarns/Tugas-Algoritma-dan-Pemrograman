#include <iostream>
using namespace std;

int main(){
    int i = 1, N, max = 100, u = 0;
    int A[max];
    float  jumlah = 0;
    for(i; i <= N; i++){
        A[i] = i;
        jumlah += A[i];
    }
    u = jumlah/N;
    cout << "Nilai rata-rata: " << u << endl;
    return 0;
}