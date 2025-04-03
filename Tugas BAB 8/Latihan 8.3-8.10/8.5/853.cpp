#include <iostream>
using namespace std;

int main(){
    int i, n, sum;
    cout << "Masukkan nilai n: ";
    cin >> n;
    sum = 0;
    i = 1;
    do {
        sum += i;
        i += 1;
    } while(i <= n);
    cout << "Hasil: " << sum << endl;
    return 0;
}