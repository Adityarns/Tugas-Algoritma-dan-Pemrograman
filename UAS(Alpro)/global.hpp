#ifndef GLOBAL_HPP
#define GLOBAL_HPP

#include <string>
using namespace std;

const int maxUser = 100;

struct ATM {
    long long saldo;
    long long topUp;
    long long transfer;
};

extern string usernames[maxUser];
extern string sandi[maxUser];
extern ATM dataATM[maxUser];
extern int akunTerdaftar;
extern int akunAktif;
extern string akunSaatini;

void simpanDataAkun();   
void muatDataAkun();
void buatAkun();
void inputlogin();
void showMenuAtm();

#endif
