#include <iostream>
using namespace std;

const int Nmaks = 100;
typedef char LarikKar[Nmaks];
bool Palindrom(LarikKar Huruf, int N) {
    int i = 0, j = N - 1;
    while (i < j && Huruf[i] == Huruf[j]) {
        i++;
        j--;
    }
    return i >= j; 
}

void BacaLarikKar(LarikKar Huruf, int& N) {
    cout << "Masukkan jumlah huruf: ";
    cin >> N;
    cout << "Masukkan huruf satu per satu:\n";
    for (int i = 0; i < N; i++) {
        cout << "Huruf ke-" << i << ": ";
        cin >> Huruf[i];
    }
}

int main() {
    LarikKar Huruf;
    int N;
    BacaLarikKar(Huruf, N);
    if (Palindrom(Huruf, N)) {
        cout << "\nKata tersebut adalah palindrom.\n";
    } else {
        cout << "\nKata tersebut bukan palindrom.\n";
    }
    return 0;
}
