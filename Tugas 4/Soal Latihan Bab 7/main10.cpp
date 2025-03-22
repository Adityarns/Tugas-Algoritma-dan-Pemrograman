#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int d, m, y;
    cout << "Masukkan tanggal (dd mm yyyy): ";
    cin >> d >> m >> y;

    tm time_in = {0, 0, 0, d, m - 1, y - 1900};
    time_t time_temp = mktime(&time_in);
    tm *time_out = localtime(&time_temp);

    string hari[] = {"Minggu", "Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu"};
    cout << "Hari: " << hari[time_out->tm_wday] << endl;

    return 0;
}
