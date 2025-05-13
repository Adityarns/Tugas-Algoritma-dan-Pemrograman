#include <iostream>
using namespace std;

void tukarArray(int A[], int B[]) {
    int temp;
    for (int i = 0; i < 5; i++){
        temp = A[i];
        A[i] = B[i];
        B[i] = temp;
    }
}

int main() {
    int A[] = {10, 20, 35, 15, 77};
    int B[] = {11, 21, 45, 89, 38};    
    
    cout << "\nArray Sebelum ditukar [A]: ";
    for (int i = 0; i < 5; i++){
        cout << A[i] << " ";
    }
    cout << "\nArray Sebelum ditukar [B]: ";
    for (int i = 0; i < 5; i++){
        cout << B[i] << " ";
    }
    tukarArray(A, B);
    cout << "\n\nArray Sesudah ditukar [A]: ";
    for (int i = 0; i < 5; i++){
        cout << A[i] << " ";
    }
    cout << "\nArray Sesudah ditukar [B]: ";
    for (int i = 0; i < 5; i++){
        cout << B[i] << " ";
    }
    
    
    return 0;
}
