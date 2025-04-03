#include <iostream>
using namespace std;

int main() {
    int x, Nx;
    Nx = 0;
    cout << "Masukkan banyak data: ";
    cin >> x;

    while (x != -1){
        if(x % 2 == 0){
            Nx += 1;
        }
        cout << "Masukkan banyak data: ";
        cin >> x;
    }
    cout << "Jumlah bilangan genap: " << Nx << endl;
    return 0;
}
