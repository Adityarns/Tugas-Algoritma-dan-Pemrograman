#include <iostream>
using namespace std;

void HitungLuasSegitiga(float a, float t, float &L);

int main() {
    int i, N;
    float a, t, luas;
    cout << "Banyaknya segitiga: ";
    cin >> N;
    
    for (i = 1; i <= N; i++) {
        cout << "Segitiga yang ke-" << i << endl;
        cout << "Panjang alas segitiga: ";
        cin >> a;
        cout << "Tinggi segitiga: ";
        cin >> t;
        HitungLuasSegitiga(a, t, luas);
        cout << "Luas segitiga: " << luas << endl;
    }
    return 0;
}

void HitungLuasSegitiga(float a, float t, float &L) {
    L =  (a * t) / 2.0;
}