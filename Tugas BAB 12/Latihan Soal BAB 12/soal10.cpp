#include <iostream>
using namespace std;

// Fungsi untuk menghitung median dari array yang sudah terurut
double hitungMedian(int A[], int N) {
    if (N % 2 == 1) {
        // Jika jumlah elemen ganjil, ambil elemen tengah
        return A[N / 2];
    } else {
        // Jika jumlah elemen genap, ambil rata-rata dari dua elemen tengah
        return (A[N / 2 - 1] + A[N / 2]) / 2.0;
    }
}

int main() {
    // Contoh data sudah terurut menaik
    int A[] = {2, 4, 6, 8, 10, 12}; // median = (6 + 8) / 2 = 7.0
    int N = sizeof(A) / sizeof(A[0]);

    double median = hitungMedian(A, N);
    cout << "Median dari larik adalah: " << median << endl;

    return 0;
}
