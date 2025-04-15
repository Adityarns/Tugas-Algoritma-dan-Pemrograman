#include <iostream>
using namespace std;

void hitungLuasSegitiga(double alas, double tinggi, double& luas) {
    luas = 0.5 * alas * tinggi;
}

int main() {
    double a, t, luas;
    cout << "Masukkan alas segitiga: ";
    cin >> a;
    cout << "Masukkan tinggi segitiga: ";
    cin >> t;
    hitungLuasSegitiga(a, t, luas); 
    cout << "Luas segitiga adalah: " << luas << endl;
    return 0;
}