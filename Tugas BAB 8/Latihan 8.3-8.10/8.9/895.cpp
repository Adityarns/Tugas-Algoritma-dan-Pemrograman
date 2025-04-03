#include <iostream>
using namespace std;

int main() {
    int N, x ,min , i;
    i = 1;
    cout << "Masukkan banyak data: ";
    cin >> N;
    cout << "Masukkan data: "; 
    cin >> x;
    min = x;
    do {
        cout << "Masukkan data: "; 
        cin >> x;
        if (x < min){
            min = x;
        }
        i += 1;
    } while(i < N);
    cout << "Nilai min: " << min << endl;
    return 0;
}
