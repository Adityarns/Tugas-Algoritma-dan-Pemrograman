#include <iostream>
using namespace std;

void duaTerbesar(int A[], int &max1, int &max2) {
    max1 = max2 = INT_MIN;
    for (int i = 0; i < 10; i++) {
        if (A[i] > max1) {
            max2 = max1;
            max1 = A[i];
        } else if (A[i] > max2 && A[i] != max1) {
            max2 = A[i];
        }
    }
}

int main(){
    int max1, max2;
    int A[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 100}; 
    duaTerbesar(A, max1, max2);
    cout << "Dua angka terbesar adalah: " << max1 << " dan " << max2 << endl;
    return 0;
}