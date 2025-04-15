#include <iostream>
using namespace std;

void tentukanNilaiMaksimum(int a, int b, int& max){
    if (a > b){
        max = a;
    }
    else {
        max = b;
    }
}

int main(){
    int a, b, max;
    cout << "Masukkan dua bilangan: ";
    cin >> a >> b;
    tentukanNilaiMaksimum(a, b, max);
    cout << "Nilai maksimum dari " << a << " dan " << b << " adalah: " << max << endl;
}
