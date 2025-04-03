#include <iostream>
using namespace std;

int main() {
    int n, fak, i;
    cout << "Masukkan nilai n: ";
    cin >> n;
    fak = 1;
    for(i = 1;i <= n;i++){
        fak *= i;
    }
    cout << "Hasil: " << fak << endl;
    return 0;
}
