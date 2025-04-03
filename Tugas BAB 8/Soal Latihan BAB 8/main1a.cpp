#include <iostream>
using namespace std;

int main(){
    int n;
    char x;
    cout << "Masukkan jumlah karakter: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        cout << "Masukkan karakter ke-" << i << ": ";
        cin >> x;
    }    
    return 0;
}