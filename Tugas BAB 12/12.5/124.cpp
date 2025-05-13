#include <iostream>
using namespace std;

int main(){
    int i, N, A[N];
    char jawab;
    i = 0;
    do{
        i += 1;
        i = A[i];
        cout << "Lagi baca data larik? (y/t): ";
        cin >> jawab;

    } while(jawab != 't');
    i = N;

    return 0;
}