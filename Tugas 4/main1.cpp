#include <iostream>
using namespace std;

int main(){
    int A,B,C;
    A = 8;
    B = 5;
    // Cara 1
    // cout << "A: " << A << " B: " << B << endl;

    // C = A;
    // A = B;
    // B = C;
    cout << "A: " << A << " B: " << B << endl;

    // Cara 2
    A+=B;
    B=A-B;
    A-=B;
    cout << "A: " << A << " B: " << B << endl;
    return 0;
}