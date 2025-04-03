#include <iostream>
using namespace std;

int main() {
    int N, x ,min , i;
    cout << "Masukkan banyak data: ";
    cin >> N;
    cout << "Masukkan data: "; 
    cin >> x;
    min = x;
    for (int i = 2; i <= N; i++) {
        cout << "Masukkan data: "; 
        cin >> x;
        if (x < min){
            min = x;
        }
    }
    cout << "Nilai min: " << min << endl;

    return 0;
}
