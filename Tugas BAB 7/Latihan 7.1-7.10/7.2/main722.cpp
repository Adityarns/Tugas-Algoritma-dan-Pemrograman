#include <iostream>
using namespace std;

int main(){
    char cc;
    cout << "--menentukan huruf vokal--" << endl;
    cout << "masukkan huruf: ";
    cin >> cc;

    if (cc == 'a' || cc == 'i' || cc == 'u' || cc == 'e' || cc == 'o'){
        cout << cc << " Merupakan huruf vokal" <<  endl;
    }
    return 0;
}