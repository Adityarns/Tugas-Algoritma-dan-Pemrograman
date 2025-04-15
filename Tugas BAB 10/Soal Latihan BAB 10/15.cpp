#include <iostream>
using namespace std;

int hitungFPB(int a, int b) {
    while (b != 0) {
        int sisa = a % b;
        a = b;
        b = sisa;
    }
    return a;
}
int hitungKPK(int a, int b) {
    return (a * b) / hitungFPB(a, b);
}

int main() {
    int bil1, bil2;
    cout << "Masukkan dua bilangan bulat: ";
    cin >> bil1 >> bil2;

    int kpk = hitungKPK(bil1, bil2);
    cout << "KPK dari " << bil1 << " dan " << bil2 << " adalah: " << kpk << endl;

    return 0;
}
