#include <iostream>
using namespace std;

int main() {
    int km, m, cm, x;
    
    cout << "Masukkan jarak dalam cm: ";
    cin >> x;

    km = x / 100000;
    x %= 100000;

    m = x / 100;
    x %= 100;

    cm = x;
    cout << "semut telah menempuh jarak sejauh: " << km << " Km " << m << " m " << cm << " cm " << endl;
    
    return 0;
}
