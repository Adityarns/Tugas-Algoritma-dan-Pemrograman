#include <iostream>
using namespace std;

int main() {
    int tinggi, berat, x;
    
    cout << "Masukkan tinggi badan dalam cm: ";
    cin >> tinggi;

    x = tinggi - 100;
    berat = x - (x * 10/100);
    cout << "Berat badan ideal adalah: " << berat << " Kg " << endl;    
    return 0;
}
