#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int N, i, x, sum;
    float rerata;
    ifstream Fin;

    Fin.open("data.txt");
    Fin >> N;
    sum = 0;
    i = 1;
    while(i <= N){
        Fin >> x;
        sum += x;
        i += 1;
    }
    rerata = (float)sum/N;  
    cout << "Rata-rata: " << rerata << endl;
    Fin.close();
    return 0;
}