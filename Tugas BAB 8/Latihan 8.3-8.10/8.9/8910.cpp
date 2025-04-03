#include <iostream>
using namespace std;

int main() {
    int n, i;
    double a, p;
    cout << "Masukkan bilangan dan pangkatnya(a,n): ";
    cin >> a >> n;
    p = 1;
    for(i = 1; i<= n; i++){
        p *= a;
    }
    cout << "Hasil: " << p << endl;
    return 0;
}
