#include <iostream>
#include <fstream>
using namespace std;

int main(){
    float panjang = 3, lebar = 4 , luas;
    ifstream Fin;
    ofstream Fout;

    Fin.open("data.txt");
    Fout.open("data.txt");
    Fin >> panjang, lebar;
    luas = panjang * lebar;
    Fout << "Luas segi empat: " << luas << endl;

    Fin.close();
    Fout.close();

    return 0;
}