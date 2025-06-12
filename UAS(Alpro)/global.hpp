#ifndef GLOBAL_HPP
#define GLOBAL_HPP

#include <string>
using namespace std;

const int maxUser = 100;

struct ATM {
    int saldo = 10000;
    int transfer;
    int tarikTunai;
    int topUp;
};

extern string usernames[maxUser];
extern string sandi[maxUser];
extern ATM dataATM[maxUser];
extern int akunTerdaftar;
extern int akunAktif;

void simpanDataAkun();   
void muatDataAkun();
void buatAkun();
void inputlogin();
void showMenuAtm();

#endif
