#include <iostream>
#include <cstring>
using namespace std;

int apakahSama(char *s1, char *s2) {
    int i = 0;
    int sama;

    if (strlen(s1) != strlen(s2)) {
       return 0; 
    }
    else{
        i = 1;
        sama = 1;
        while (s1[i] != '\0' && sama == 1) {
            if (s1[i] == s2[i]) {
                i = i + 1;
            }
            else {
                sama = 0; 
            }
        }
    }
    i++;
    
    return (s1[i] == s2[i]); 
}

int main() {
    char str1[100], str2[100];
    cout << "Masukkan string pertama: ";
    cin >> str1;
    cout << "Masukkan string kedua: ";
    cin >> str2;

    if (apakahSama(str1, str2)) {
        cout << "Kedua string sama." << endl;
    } else {
        cout << "Kedua string tidak sama." << endl;
    }
    return 0;
}
