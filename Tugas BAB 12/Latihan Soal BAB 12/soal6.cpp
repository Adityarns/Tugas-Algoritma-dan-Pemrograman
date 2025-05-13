#include <iostream>
using namespace std;

void tukarArrayPertamaTerakhir(int A[]) {
    int temp;
    temp = A[0];
    A[0] = A[4];
    A[4] = temp;
}

int main() {
    int A[] = {17, 98, 56, 87, 12};

    cout << "\nArray Sebelum ditukar [A]: ";
    for (int i = 0; i < 5; i++){
        cout << A[i] << " ";
    }
    tukarArrayPertamaTerakhir(A);
    cout << "\nArray Sesudah ditukar [A]: ";
    for (int i = 0; i < 5; i++){
        cout << A[i] << " ";
    }    
    cout << endl;
    return 0;
}
