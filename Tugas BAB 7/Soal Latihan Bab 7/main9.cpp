#include <iostream>

using namespace std;

int main() {
    float tinggi, berat, ideal;

    cout << "Masukkan tinggi badan (cm): ";
    cin >> tinggi;
    cout << "Masukkan berat badan (kg): ";
    cin >> berat;

    ideal = (tinggi - 100) * 0.9;

    if (berat >= ideal - 2 && berat <= ideal + 2) {
        cout << "Berat badan ideal" << endl;
    } else {
        cout << "Berat badan tidak ideal" << endl;
    }

    return 0;
}
