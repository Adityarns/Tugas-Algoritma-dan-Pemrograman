#include <iostream>
#include <string>
using namespace std;

struct Titik{
    double x,y;
};

int main (){
    Titik P1, P2, P3;
    cout << "Masukkan koordinat P1 (x, y): ";
    cin >> P1.x >> P1.y;
    cout << "Masukkan koordinat P2 (x, y): ";
    cin >> P2.x >> P2.y;

    P3.x = (P1.x + P2.x) / 2;
    P3.y = (P1.y + P2.y) / 2;

    cout << "Titik tengahnya: " << "(" <<  P3.x << ", "<< P3.y << ")" << endl;


    return 0;
}