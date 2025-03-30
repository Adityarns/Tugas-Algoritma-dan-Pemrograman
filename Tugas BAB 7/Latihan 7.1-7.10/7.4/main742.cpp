#include <iostream>
using namespace std;

struct titik{
    int x, y;
};

int main(){
    titik p;
    cout << "Masukkan nilai (x/y): ";
    cin >> p.x >> p.y;
    if (p.x > 0 && p.y > 0){
        cout << "Titik berada di kuadran 1" << endl;
    }
    else if (p.x < 0 && p.y > 0){
        cout << "Titik berada di kuadran 2" << endl;
    }
    else if (p.x < 0 && p.y < 0){
        cout << "Titik berada di kuadran 3" << endl;
    }
    else if (p.x > 0 && p.y < 0){
        cout << "Titik berada di kuadran 4" << endl;
    }
    else{
        cout << "Titik tidak berada di kuadran manapun" << endl;
    }

    return 0;
}