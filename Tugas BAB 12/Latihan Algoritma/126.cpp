#include <iostream>
using namespace std;

int main(){
    int i, N, max = 100;
    int A[max];
    char jawab;
    i = 0;
    do{
        cout << "Lagi baca data larik? (y/t): ";
        cin >> jawab;
        A[i] = i;
        i += 1;

    } while(jawab != 't');
    N = i;
    cout << "Jumlah data yang dibaca: " << N << endl;
    return 0;
}