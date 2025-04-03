#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Masukkan bilangan bulat: ";
    cin >> n;
    if (n <= 1) {
        cout << n << " bukan bilangan prima." << endl;
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            cout << n << " bukan bilangan prima." << endl;
            return 0;
        }
    }
    cout << n << " adalah bilangan prima." << endl;
    return 0;
}