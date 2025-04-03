#include <iostream>
using namespace std;

int main() {
    char cc;
    int Nangka, Nspasi, Nlainnya;
    Nangka = 0;
    Nspasi = 0;
    Nlainnya = 0;
    cout << "Masukkan karakter: ";
    cin >> cc;
    while(cc != '.'){
        switch (cc)
        {
        case '0':
            Nangka += 1;
            Nspasi += 1;
            break;
        case '1':
            Nangka += 1;
            Nspasi += 1;
            break;
        case '2':
            Nangka += 1;
            Nspasi += 1;
            break;
        case '3':
            Nangka += 1;
            Nspasi += 1;
            break;
        case '4':
            Nangka += 1;
            Nspasi += 1;
            break;
        case '5':
            Nangka += 1;
            Nspasi += 1;
            break;
        case '6':
            Nangka += 1;
            Nspasi += 1;
            break;
        case '7':
            Nangka += 1;
            Nspasi += 1;
            break;
        case '8':
            Nangka += 1;
            Nspasi += 1;
            break;
        case '9':
            Nangka += 1;
            Nspasi += 1;
            break;
        default:
            Nlainnya += 1;
            break;
        }
        cout << "Masukkan karakter: ";
        cin >> cc;
    }
    cout << "Spasi: " << Nspasi << endl;
    cout << "Angka: " << Nangka << endl;
    cout << "Lainnya: " << Nlainnya << endl;
    return 0;
}
