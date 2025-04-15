#include <iostream>
#include <cmath>
using namespace std;

double hitungJumlahUang(double A, double i, int n) {
  double F = A * pow(1 + (i / 100), n);
  return F;
}

int main() {
  double A; 
  double i; 
  int n;    
  cout << "Masukkan jumlah uang awal (A): ";
  cin >> A;
  cout << "Masukkan tingkat bunga tahunan (i dalam persen): ";
  cin >> i;
  cout << "Masukkan jumlah tahun (n): ";
  cin >> n;
  double F = hitungJumlahUang(A, i, n);
  cout << "Jumlah uang setelah " << n << " tahun adalah: " << F << endl;
  return 0;
}