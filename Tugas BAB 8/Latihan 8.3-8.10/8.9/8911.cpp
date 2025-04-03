#include <iostream>
using namespace std;

int main() {
    double a, p = 1;
    int n;
    cout << "Masukkan nilai a: ";
    cin >> a;
    cout << "Masukkan nilai n: ";
    cin >> n;   
    if (n < 0) {
        for (int i = 1; i <= -n; i++) {
            p *= a;
        }
        p = 1 / p;
    } else {
        for (int i = 1; i <= n; i++) {
            p *= a;
        }
    }  
    cout << "Hasil perpangkatan: " << p << endl;
    return 0;
}
