#include <iostream>
using namespace std;

void Tukar(int &A, int &B) {
    int C;      
    C = A;      
    A = B;      
    B = C;      
}

int main() {
    int A, B;
    cout << "Masukkan dua bilangan bulat: ";
    cin >> A >> B;
    cout << "Sebelum ditukar: " << endl;
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;    
    Tukar(A, B);
    cout << "Setelah ditukar: " << endl;
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;    
    return 0;
}
