#include <iostream>
using namespace std;

int hitungRange(int A[], int N) {
    return A[N - 1] - A[0];
}

int main(){
    int x;
    int A[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 100}; 
    int Index = hitungRange(A, 10);
    cout << "Range dari angka adalah: " << Index << endl;
    return 0;
}