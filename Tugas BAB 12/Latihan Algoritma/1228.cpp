#include <iostream>
using namespace std;

int Panjang(char s[]){
    int i;
    i = 0;
    while (s[i] != '\0')
    {
        i += 1;
    }
    return i;
}

int main() {
    char str[100];
    cout << "Masukkan sebuah string: ";
    cin >> str;
    int panjang = Panjang(str);
    cout << "Panjang string adalah: " << panjang << endl;

    return 0;
}
