#include <iostream>
using namespace std;

int main(){
    int x, i,sum;
    float rerata;
    sum = 0;
    i = 0;
    cout << "Ketikkan nilai x: ";
    cin >> x;
    while(x != -1){
        i += 1;
        sum += x;
        cout << "Ketikkan nilai x: ";
        cin >> x;
    }
    if (i != 0){
        rerata = (float)sum/i;
        cout << "Rata-rata: " << rerata << endl;
    }
    else {
        cout << "Tidak ada data yang dimasukkan" << endl;
    }
    return 0;
}