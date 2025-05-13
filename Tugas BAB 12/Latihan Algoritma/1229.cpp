#include <iostream>
using namespace std;

void SalinString(char *s1, char *s2) {
    int i = 0;
    while (s1[i] != '\0') {
        s2[i] = s1[i];
        i+=1;
    }
    s2[i] = '\0'; // Menambahkan karakter null di akhir string
}

int main() {
    char str1[100], str2[100];
    cout << "Masukkan string pertama: ";
    cin >> str1;
    SalinString(str1, str2);
    cout << "String kedua setelah disalin: " << str2 << endl;
    return 0;
}
