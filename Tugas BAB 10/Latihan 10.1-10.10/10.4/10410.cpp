#include <iostream>
using namespace std;

void Tukar(int &A, int &B) {
    int C;      
    C = A;      
    A = B;      
    B = C;      
}

int main() {
    int m, n;
    m = 8;
    n = 5;
    cout << "\nSebelum ditukar :" << endl;
    cout << " m = " << m << endl; 
    cout << " n = " << n << endl;
    Tukar(m, n);
    cout << "Setelah ditukar :" << endl;
    cout << " m = " << m << endl; 
    cout << " n = " << n << endl;
    return 0;
}
