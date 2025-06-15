#include <iostream>
using namespace std;

const int Nmax = 100;
bool isPalindrom(char Huruf[], int n) {
    int i = 0, j = n - 1;
    while (i <= j && Huruf[i] == Huruf[j]) {
        i++;
        j--;
    }
    if (i>j){
        return true;
    }
    else {
        return false;
    }
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
