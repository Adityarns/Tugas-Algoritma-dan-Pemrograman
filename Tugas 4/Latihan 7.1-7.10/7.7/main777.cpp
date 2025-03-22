#include <iostream>
using namespace std;

struct tanggal
{
   int dd, mm, yy;
};


int main(){
    tanggal tgl;
    tgl.mm = 2;
    cout << "Masukkan tanggal(dd/yy): ";
    cin >> tgl.dd >> tgl.yy;
    if(tgl.dd < 28){
        tgl.dd = tgl.dd + 1;
    }
    else{
        if(tgl.yy % 4 == 0 && tgl.yy % 100 != 0 || tgl.yy % 400 == 0){
            if(tgl.dd == 28){
                tgl.dd + 1;
            }
            else{
                tgl.dd = 1;
                tgl.mm = tgl.mm +1;
            }
        }
        else{
            tgl.dd = 1;
            tgl.mm +=1;
        }
    }

    cout << "Besok tanggal: " << tgl.dd << "-" << tgl.mm << "-" << tgl.yy << endl;
    return 0;
}