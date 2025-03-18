#include <iostream>

using namespace std;

struct Jam {
    int hh; 
    int mm; 
    int ss; 
};

int main() {
    int totalDetik;
    Jam hasil;
    
    cout << "Masukkan total detik: ";
    cin >> totalDetik;

    hasil.hh = totalDetik / 3600;        
    int sisa = totalDetik % 3600;        
    hasil.mm = sisa / 60;                
    hasil.ss = sisa % 60;                

    cout << "Hasil konversi: " << hasil.hh << " jam, "
         << hasil.mm << " menit, " << hasil.ss << " detik." << endl;

    return 0;
}