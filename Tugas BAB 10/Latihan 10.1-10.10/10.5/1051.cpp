#include <iostream>
using namespace std;

void HitungLuasSegitiga();

int main() {
    int i, N;
    cout << "Banyaknya segitiga: ";
    cin >> N;
    
    for (i = 1; i <= N; i++) {
        cout << "Segitiga yang ke-" << i << endl;
        HitungLuasSegitiga();
    }
    return 0;
}

void HitungLuasSegitiga() {
    float alas;    
    float tinggi;  
    float L;       
    cout << "Panjang alas segitiga: ";
    cin >> alas;
    cout << "Tinggi segitiga: ";
    cin >> tinggi;
    L = (alas * tinggi) / 2.0;
    cout << "Luas segitiga: " << L << endl << endl;
}