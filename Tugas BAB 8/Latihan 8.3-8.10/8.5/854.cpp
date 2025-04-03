#include <iostream>
using namespace std;

int main(){
    int i, n, sum; 
    double rerata;
    cout << "Masukkan nilai n: ";
    cin >> n;
    sum = 0;
    i = 1.0;
    do {
        sum += i;
        i+=1.0;
    } while(i <= n);
    rerata = sum/n;
    cout << "Hasil: " << rerata << endl;
    return 0;
}