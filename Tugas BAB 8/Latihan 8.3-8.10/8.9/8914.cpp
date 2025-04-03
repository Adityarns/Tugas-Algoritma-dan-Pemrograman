#include <iostream>
#include <string>
using namespace std;

int main() {
    const string password = "abc123";
    string kataSandi;
    bool sah;
    int count;
    count = 1;
    sah = false;

    while(not sah && count <= 3){
        cout << "Masukkan kata sandi: ";
        cin >> kataSandi;
        if(kataSandi == password){
            sah = true;
        }
        else{
            count++;
        }
    }    
    return 0;
}
