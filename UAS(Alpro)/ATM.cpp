#include <iostream>
#include <string>

using namespace std;

struct ATM {
    int saldo = 10000;
    int transfer;
    int tarikTunai;
    int topUp;
};

void showMenuAtm() {
    ATM userAtm; // Membuat objek ATM
    int userInput2;

    do {
        cout << "\n--- ATM ---" << endl;
        cout << "SALDO ANDA: Rp" << userAtm.saldo << endl;
        cout << "1. TRANSFER" << endl;
        cout << "2. TOP UP" << endl;
        cout << "3. TARIK TUNAI" << endl;
        cout << "4. KELUAR" << endl;
        cout << "Jawaban: ";
        cin >> userInput2;

        switch (userInput2) {
            case 1:
                cout << "Masukkan jumlah uang yang ingin ditransfer: ";
                cin >> userAtm.transfer;
                if (userAtm.transfer > userAtm.saldo) {
                    cout << "Saldo tidak cukup.\n";
                } else {
                    userAtm.saldo -= userAtm.transfer;
                    cout << "Transfer berhasil.\n";
                }
                break;

            case 2:
                cout << "Masukkan jumlah uang yang ingin dimasukkan: ";
                cin >> userAtm.topUp;
                userAtm.saldo += userAtm.topUp;
                cout << "Top up berhasil.\n";
                break;

            case 3:
                cout << "Masukkan jumlah uang yang ingin ditarik: ";
                cin >> userAtm.tarikTunai;
                if (userAtm.tarikTunai > userAtm.saldo) {
                    cout << "Saldo tidak cukup.\n";
                } else {
                    userAtm.saldo -= userAtm.tarikTunai;
                    cout << "Penarikan berhasil.\n";
                }
                break;

            case 4:
                cout << "Terima kasih telah menggunakan layanan ATM.\n";
                break;

            default:
                cout << "Pilihan tidak valid. Silakan coba lagi.\n";
                break;
        }

    } while (userInput2 != 4);
}
