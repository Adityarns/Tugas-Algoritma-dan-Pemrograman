#include <iostream>
using namespace std;

void inc(int &x){
    x = x + 1;
}
int main(){
    int x;
    x = 1;
    do{
        cout << x << endl;
        inc(x);
    }while(x <= 10);
    return 0;
}