#include <iostream>
using namespace std;

void hitungRerata(float &rataRata);

int main() {
    float hasil;
    hitungRerata(hasil);
    
    return 0;
}
void hitungRerata(float &rataRata){
    int i = 0;
    int x, jumlah = 0;
    while(i <= 9999){
        cout << "Masukkan bilangan (-1 untuk berhenti): ";
        cin >> x;
        if(x == -1){
            break;
        }
        jumlah += x;
        i+=1; 
    }
    rataRata = jumlah/i;
    cout << "Rata-rata: " << rataRata << endl;
}



