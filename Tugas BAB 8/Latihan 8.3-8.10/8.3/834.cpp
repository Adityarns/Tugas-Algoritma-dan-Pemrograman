#include <iostream>
using namespace std;

int main(){
    int n,x,i,sum,rerata;
    sum = 0;
    cout << "Masukkan nilai N: ";
    cin >> n;
    for(i = 1; i<=n; i++){
        cout << "Masukkan nilai x: ";
        cin >> x;
        sum += x;
    }
    rerata = sum/n;
    cout << "Nilai rata-rata: " << rerata << endl;
    return 0;
}