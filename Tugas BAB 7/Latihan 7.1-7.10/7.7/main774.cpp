#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a, b, c, D, x1, x2;
    
    cout << "Masukkan nilai koefisien (ax^2 bx c): ";
    cin >> a >> b >> c;
    D = b*b - 4 * a * c;

    if (D < 0){
        cout << "Akar persamaan kuadrat imajiner.." << endl;
    }
    else if(D > 0){
        x1 = (-b + sqrt(D)) / 2 * a;
        x2 = (-b - sqrt(D)) / 2 * a;
        
    }
    else{
        x1 = (-b + sqrt(D)) / 2 * a;
        x2 = x1;
    }

    cout << "Nilai x1: " << x1 << endl;
    cout << "Nilai x2: " << x2 << endl;
    return 0;
}