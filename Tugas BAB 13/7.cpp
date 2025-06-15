#include <iostream>
using namespace std;

const int Nmax = 100;
bool isPalindrom(char Huruf[], int n) {
    int i = 0, j = n - 1;
    bool pal = true;
    while (i < j) {
        if (Huruf[i] != Huruf[j]) {
            pal = false;
        }
        else{
            i+= 1;
            j-= 1;
        }
    }
    return pal;
}

int main() {
    char huruf[Nmax];
    int n;
    cout << "Masukkan jumlah karakter: ";
    cin >> n;
    cout << "Masukkan karakter satu per satu:\n";
    for (int i = 0; i < n; i++) {
        cout << "Huruf ke-" << i+1 << ": ";
        cin >> huruf[i];
    }
    if (isPalindrom(huruf, n)) {
        cout << "\nUrutan huruf tersebut adalah palindrom.\n";
    } else {
        cout << "\nUrutan huruf tersebut bukan palindrom.\n";
    }
    return 0;
}