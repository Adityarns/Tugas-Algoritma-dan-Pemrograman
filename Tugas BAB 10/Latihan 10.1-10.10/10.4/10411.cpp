#include <iostream>
using namespace std;

void inc(int &x){
    x = x + 1;
}
int main(){
    int x;
    inc(x);
    return 0;
}