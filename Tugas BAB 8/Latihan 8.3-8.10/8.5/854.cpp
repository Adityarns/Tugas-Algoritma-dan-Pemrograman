#include <iostream>
using namespace std;

int main(){
    int i, n, sum, rerata;
    cout << "Masukkan nilai n: ";
    cin >> n;
    sum = 0;
    i = 1;
    do {
        sum += i;
        i++;
    } while(i <= n);
    rerata = sum/n;
    cout << "Hasil: " << rerata << endl;
    return 0;
}