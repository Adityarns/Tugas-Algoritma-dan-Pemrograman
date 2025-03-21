#include <iostream>
using namespace std;

int main(){
    int x;
    cout << "--Menentukan apakah bilangan genap atau bukan--" << endl;
    cout << "Masukkan angka: ";
    cin >> x;

    if(x % 2 == 0){
        cout << x << " Merupakan bilangan genap" << endl;
    }
    return 0;
}