#include <iostream>
using namespace std;

int main(){
    int i,n, sum, rerata;
    cout << "Masukkan nilai n: ";
    cin >> n;
    sum = 0;
    i = 1;
    while (i <= n){
        sum += i;
        i++;
    }
    rerata = sum/n;
    cout << "Hasil: " << rerata << endl;
    return 0;
}