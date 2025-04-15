#include <iostream>
using namespace std;

void Tukar(int *a, int *b);

int main(){
    int m, n;
    m = 8;
    n = 5;    
    cout << "Nilai sebelum pertukaran: " << endl;
    cout << "M: " << m << endl;
    cout << "N: " << n << endl;
    Tukar(&m, &n);
    cout << "Nilai setelah pertukaran: " << endl;
    cout << "M: " << m << endl;
    cout << "N: " << n << endl;
    
    return 0;
}

void Tukar(int *a, int *b){
    int c;
    c = *a;
    *a = *b;
    *b = c;
}