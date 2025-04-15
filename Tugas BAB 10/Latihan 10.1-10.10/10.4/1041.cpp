#include <iostream>
using namespace std;

void hitungLuasSegitiga(double alas, double tinggi) {
    double luas;
    luas = 0.5 * alas * tinggi;
    cout << "Luas segitiga adalah: " << luas << endl;
}

int main() {
    hitungLuasSegitiga(5,10);
    return 0;
}