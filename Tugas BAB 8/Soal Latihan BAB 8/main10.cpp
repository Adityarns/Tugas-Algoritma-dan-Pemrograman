#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah bilangan ganjil yang ingin dijumlahkan: ";
    cin >> n;
    int jumlah = 0;
    for (int i = 0; i < n; i++) {
        jumlah += 2 * i + 1;
    }
    cout << "Jumlah " << n << " bilangan ganjil pertama adalah: " << jumlah << endl;
    return 0;
}