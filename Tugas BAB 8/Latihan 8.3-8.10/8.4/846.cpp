#include <iostream>
using namespace std;

int main(){
    int i,x, sum, rerata;
    sum = 0;
    i = 0;

    cout << "Masukkan nilai: ";
    cin >> x;
    while (x != -1){
        i++;
        sum += x;
        cout << "Masukkan nilai: ";
        cin >> x;
    }
    if(i != 0){
        rerata = sum/i;
        cout << "Hasil: " << rerata << endl;
    }
    else{
        cout << "Tidak ada data yang dimasukkan..." << endl;
    }
    return 0;
}