#include <iostream>
using namespace std;

int hitungDurasiTanggal(int d1, int m1, int y1, int d2, int m2, int y2) {
    int daysPerMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if ((y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0)) 
        daysPerMonth[1] = 29;

    int total1 = y1 * 365 + d1;
    for (int i = 0; i < m1 - 1; i++) total1 += daysPerMonth[i];

    int total2 = y2 * 365 + d2;
    for (int i = 0; i < m2 - 1; i++) total2 += daysPerMonth[i];

    return abs(total2 - total1);
}

int main() {
    int d1, m1, y1, d2, m2, y2;
    cout << "Masukkan tanggal pertama (dd mm yyyy): ";
    cin >> d1 >> m1 >> y1;
    cout << "Masukkan tanggal kedua (dd mm yyyy): ";
    cin >> d2 >> m2 >> y2;

    cout << "Selisih hari: " << hitungDurasiTanggal(d1, m1, y1, d2, m2, y2) << " hari" << endl;
    return 0;
}
