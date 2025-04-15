#include <iostream>
using namespace std;

void HitungLuasSegitiga(float a, float t);

int main() {
    int i, N;
    float a, t;
    cout << "Banyaknya segitiga: ";
    cin >> N;
    
    for (i = 1; i <= N; i++) {
        cout << "Segitiga yang ke-" << i << endl;
        HitungLuasSegitiga(a, t);
    }
    return 0;
}

void HitungLuasSegitiga(float a, float t) {
    float L;       
    cout << "Panjang alas segitiga: ";
    cin >> a;
    cout << "Tinggi segitiga: ";
    cin >> t;
    L =  (a * t) / 2.0;
    cout << "Luas segitiga: " << L << endl << endl;
}