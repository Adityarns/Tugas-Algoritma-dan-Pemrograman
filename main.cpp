#include <iostream>

using namespace std;

int main(){
    int angka, i;
    bool prima = true;
    cout << "Masukkan angka: ";
    cin>> angka;
    for(i=2;i<angka;i++){
        if(angka%i == 0){
            prima = false;
            break;
        }
        
    }
    if(prima){
        cout <<"Merupakan prima" << endl;
    }
    else{
        cout <<"Bukan Prima" << endl;
    }
    return 0;
}
