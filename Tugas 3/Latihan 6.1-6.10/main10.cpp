#include <iostream>
using namespace std;

struct pecahan{
    int a, b;
};


int main(){
    pecahan p1, p2, p3;
    cout << "Masukkan nilai pecahan pertama (a/b): ";
    cin >> p1.a >> p1.b;
    cout << "Masukkan nilai pecahan kedua (a/b): ";
    cin >> p2.a >> p2.b;

    p3.a = p1.a * p2.b + p1.b * p2.a; 
    p3.b = p1.b * p2.b;
    cout << "Nilai penjumlahan = " << p3.a << "/" << p3.b << endl;

    p3.a = p1.a * p2.b - p1.b * p2.a; 
    p3.b = p1.b * p2.b;
    cout << "Nilai pengurangan = " << p3.a << "/" << p3.b << endl;

    p3.a = p1.a * p2.a; 
    p3.b = p1.b * p2.b;
    cout << "Nilai perkalian = " << p3.a << "/" << p3.b << endl;

    p3.a = p1.a * p2.b; 
    p3.b = p1.b * p2.a;
    cout << "Nilai pembagian = " << p3.a << "/" << p3.b << endl;

    return 0;
}