#include <iostream>
using namespace std;

int main(){
    int x, s;
    s = 0;

    while (x != -1){
        s = s+1/x;
        cout << "Masukkan nilai x: ";
        cin >> x;
    }
    cout << "Nilai:" << s << endl; 
    return 0;
}