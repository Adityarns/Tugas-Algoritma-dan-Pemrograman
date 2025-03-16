#include <iostream>
using namespace std;

int main() {
    int x, y, z;

    cout << "Masukkan tiga bilangan bulat (x, y, z): ";
    cin >> x >> y >> z;

    int temp = x;
    x = y;
    y = z;
    z = temp;

    cout << "Setelah ditukar: " << x << " " << y << " " << z << endl;

    return 0;
}
