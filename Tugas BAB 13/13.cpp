#include <iostream>
using namespace std;

const int MAX = 100;

struct Polinom {
    int n; 
    float a[MAX];
};
void jumlahPolinom(Polinom p1, Polinom p2, Polinom &p3) {
    int i = 0;
    
    if (p1.n > p2.n) {
        p3.n = p1.n;
    } else {
        p3.n = p2.n;
    }
    while (i <= p1.n && i <= p2.n) {
        p3.a[i] = p1.a[i] + p2.a[i];
        i++;
    }
    while (i <= p1.n) {
        p3.a[i] = p1.a[i];
        i++;
    }
    while (i <= p2.n) {
        p3.a[i] = p2.a[i];
        i++;
    }
}

void cetakPolinom(const Polinom &p) {
    for (int i = p.n; i >= 0; i--) {
        cout << p.a[i];
        if (i > 0) cout << "x^" << i << " + ";
    }
    cout << endl;
}

int main() {
    Polinom p1, p2, p3;
    cout << "Masukkan derajat polinom pertama: ";
    cin >> p1.n;
    cout << "Masukkan koefisien polinom pertama dari pangkat 0 sampai " << p1.n << ":" << endl;
    for (int i = 0; i <= p1.n; i++) {
        cout << "a[" << i << "] = ";
        cin >> p1.a[i];
    }
    cout << "Masukkan derajat polinom kedua: ";
    cin >> p2.n;
    cout << "Masukkan koefisien polinom kedua dari pangkat 0 sampai " << p2.n << ":" << endl;
    for (int i = 0; i <= p2.n; i++) {
        cout << "b[" << i << "] = ";
        cin >> p2.a[i];
    }
    jumlahPolinom(p1, p2, p3);
    cout << "\nHasil penjumlahan polinom:\n";
    cetakPolinom(p3);
    return 0;
}
