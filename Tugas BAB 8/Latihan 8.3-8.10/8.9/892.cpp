#include <iostream>
using namespace std;

int main() {
    int ncc; 
    char cc;
    ncc = 0;
    cout << "Masukkan karakter: ";
    cin >> cc;
    while (cc != '.'){
        ncc += 1;
        cout << "Masukkan karakter: ";
        cin >> cc;
    }
    cout << "jumlah karakter: " << ncc << endl;
    return 0;
}
