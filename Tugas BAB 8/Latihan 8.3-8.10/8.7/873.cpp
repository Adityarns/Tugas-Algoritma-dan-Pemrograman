#include <iostream>
using namespace std;

int main(){
    int N, i, sum;
    cout << "Berapa N? ";
    cin >> N;
    sum = 0;
    i = 1;
    do{
        sum = sum+i;
        i++;
    }   while(i <= N);
    cout << "Jumlah deret: " << sum << endl;
    return 0;
}