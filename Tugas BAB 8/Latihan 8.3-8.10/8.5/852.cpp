#include <iostream>
using namespace std;

int main(){
    int i, n;
    cout << "Masukkan nilai n: ";
    cin >> n;
    i = 1;
    do {
        cout << i;
        i++;
    } while(i <= n);
    return 0;
}