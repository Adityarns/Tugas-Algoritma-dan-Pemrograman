#include <iostream>
using namespace std;

double hitungMedian(int A[], int N) {
    if (N % 2 == 1) {
        return A[N / 2];
    } else {
        return (A[N / 2 - 1] + A[N / 2]) / 2.0;
    }
}

int main() {
    int A[] = {2, 4, 6, 8, 10, 12}; 
    int N = sizeof(A) / sizeof(A[0]);

    double median = hitungMedian(A, N);
    cout << "Median dari larik adalah: " << median << endl;

    return 0;
}
