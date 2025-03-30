#include <iostream>
using namespace std;

int main(){
    int i;
    i = 100;
    do {
        cout << i << " ";
        i--;
    } while(i >= 0);
    cout << "Go!" << endl;
    return 0;
}