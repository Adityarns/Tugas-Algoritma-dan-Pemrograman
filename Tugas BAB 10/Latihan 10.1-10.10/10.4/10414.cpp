#include <iostream>
using namespace std;

struct Jam {
    int hh;
    int mm;
    int ss;
};

void JamBerikutnya(Jam &j){
    int totalDetik, sisaDetik;
    if(j.ss + 1 < 60){
        j.ss += 1;
    }
    else{
        j.ss = 0;
        if(j.mm + 1 < 60){
            j.mm += 1;
        }
        else{
            j.mm = 0;
            if(j.hh + 1 < 24){
                j.hh += 1;
            }
            else{
                j.hh = 0;
            }
        }
    }
} 

int main(){
    Jam j;
    cout << "Masukkan Waktu(hh/mm/ss): ";
    cin >> j.hh >> j.mm >> j.ss;
    JamBerikutnya(j);
    cout << "Waktu setelah ditambahkan: " << j.hh << " " << j.mm << " " << j.ss << endl;
    return 0;
}