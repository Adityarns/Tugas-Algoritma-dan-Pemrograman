#include <iostream>
using namespace std;

void HitungLuasSegitiga(float alas, float tinggi) {
    float L = (alas * tinggi) / 2;
    cout << "Luas segitiga adalah: " << L << endl;
}

int main() {
    float alas, tinggi;

    cout << "Masukkan panjang alas segitiga (cm): ";
    cin >> alas;
    cout << "Masukkan tinggi segitiga (cm): ";
    cin >> tinggi;

    HitungLuasSegitiga(alas, tinggi);

    return 0;
}
