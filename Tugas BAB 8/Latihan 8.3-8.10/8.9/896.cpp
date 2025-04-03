#include <iostream>
using namespace std;

int main() {
    int x ,min;
    cout << "Masukkan data: "; 
    cin >> x;
    if(x != -1){
        min = x;
        cout << "Masukkan data: "; 
        cin >> x;
        while (x != -1){
            if(x < min){
                min = x;
            }
        cout << "Masukkan data: "; 
        cin >> x;
        }
    }
    else{
        cout << "Tidak ada data yang dimasukkan..";
    }
    cout << "Nilai min: " << min << endl;

    return 0;
}
