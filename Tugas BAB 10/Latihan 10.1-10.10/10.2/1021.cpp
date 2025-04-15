#include <iostream>
using namespace std;

void hitungLuasSegitiga(double alas, double tinggi) {
    double luas = 0.5 * alas * tinggi;
    cout << "Luas segitiga dengan alas " << alas << " dan tinggi " << tinggi << " adalah: " << luas << endl;
}

int main() {
    cout << "Mulai menghitung luas segitiga" << endl;

    double alasSegitiga = 10.0;
    double tinggiSegitiga = 5.0;
    hitungLuasSegitiga(alasSegitiga, tinggiSegitiga);

    cout << "Selesai" << endl;

    return 0;
}