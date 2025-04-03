#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah bilangan Fibonacci yang ingin dicetak: ";
    cin >> n;
    int fib[n];
    fib[0] = 1;
    fib[1] = 1;
    cout << "Deret Fibonacci: ";
    cout << fib[0] << " " << fib[1] << " ";
    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
        cout << fib[i] << " ";
    }
    cout << endl;
    return 0;
}