#include <iostream>
#include <string>
using namespace std;

string salinSubstring(string s, int i, int n) {
    if (i >= s.length()) {
        return "";  
    }
    return s.substr(i, n); 
}

int main() {
    string s = "Pemrograman";
    int i = 3;   
    int n = 5;   

    string hasil = salinSubstring(s, i, n);
    cout << "Substring hasil: \"" << hasil << "\"" << endl;

    return 0;
}
