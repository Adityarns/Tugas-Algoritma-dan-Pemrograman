#include <iostream>
using namespace std;

int main(){
    int op1, op2;
    char oprt;

    cout << "Masukkan nilai dan operasi yang diinginkan: ";
    cin >> op1 >> oprt >> op2;

    switch (oprt){
       case '+': cout << "Hasilnya: " << op1 + op2 << endl;
        break;
       case '-': cout << "Hasilnya: " << op1 - op2 << endl;
        break;
       case '*': cout << "Hasilnya: " << op1 * op2 << endl;
        break;
       case '/': if(op2 != 0){
           cout << "Hasilnya: " << op1 / op2 << endl;
        }
        else{
            cout << "Error" << endl;
        }
        break;
    }

    return 0;
}