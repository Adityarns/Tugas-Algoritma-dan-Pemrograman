#include <iostream>
using namespace std;

int main(){
    int A, B, C;
    A = 8;
    B = 5;
    cout << "Nilai A dan B sebelum pertukaran: \n" ;
    cout << "Nilai A: " << A << "\n";
    cout << "Nilai B: " << B << "\n";
    C = A;
    A = B;
    B = C;
    cout << "Nilai A dan B setelah pertukaran: \n" ;
    cout << "Nilai A: " << A << "\n";
    cout << "Nilai B: " << B << "\n";
    return 0;
}