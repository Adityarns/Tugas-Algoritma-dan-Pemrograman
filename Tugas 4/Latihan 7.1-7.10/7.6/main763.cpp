#include <iostream>

using namespace std;

int main() {
    int hh, mm, ss;

    cout << "Masukkan jam (0-23): ";
    cin >> hh;
    cout << "Masukkan menit (0-59): ";
    cin >> mm;
    cout << "Masukkan detik (0-59): ";
    cin >> ss;

    ss++;

    if (ss == 60) { 
        ss = 0;
        mm++;

        if (mm == 60) { 
            mm = 0;
            hh++;

            if (hh == 24) { 
                hh = 0;
            }
        }
    }

    cout << "Jam yang baru: ";
    cout << (hh < 10 ? "0" : "") << hh << ":"
         << (mm < 10 ? "0" : "") << mm << ":"
         << (ss < 10 ? "0" : "") << ss << endl;

    return 0;
}
