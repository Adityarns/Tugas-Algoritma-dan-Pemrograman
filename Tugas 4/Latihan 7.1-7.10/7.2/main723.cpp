#include <iostream>
using namespace std;

int main(){
    int x;
    cout << "--menentukan nilai mutlak--" << endl;
    cout << "masukkan nilai: ";
    cin >> x;

    if (x < 0){
        x = x * -1;
    }
    cout << "Nilai mutlak: " << x <<  endl;
    return 0;
}