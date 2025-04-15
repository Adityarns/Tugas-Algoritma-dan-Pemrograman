#include <iostream>
using namespace std;

void hitungLuasSegitiga(double alas, double tinggi, double& luas) {
    luas = 0.5 * alas * tinggi;
}

int main() {
    double hasil;
    hitungLuasSegitiga(9, 6, hasil);
    cout << "Luas segitiga adalah: " << hasil << endl;
    return 0;
}