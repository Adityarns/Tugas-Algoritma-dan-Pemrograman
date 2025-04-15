#include <iostream>
using namespace std;

void hitungLuasSegitiga(double alas, double tinggi) {
    double luas;
    luas = 0.5 * alas * tinggi;
    cout << "Luas segitiga adalah: " << luas << endl;
}

int main() {
    double alas, tinggi;
    cout << "Masukkan nilai alas: ";
    cin >> alas;
    cout << "Masukkan nilai tinggi: ";
    cin >> tinggi;
    hitungLuasSegitiga(alas,tinggi);
    return 0;
}