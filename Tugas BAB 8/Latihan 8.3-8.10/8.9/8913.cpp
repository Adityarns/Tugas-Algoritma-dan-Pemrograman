#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, m, i, j;
    double nilai, jumlah, rerata;
    string nama;
    cout << "Masukkan jumlah siswa dan jumlah mata pelajaran: ";
    cin >> n >> m;
    i = 1;
    while (i <= n){
        cout << "Masukkan nama: ";
        cin >> nama;
        j = 1;
        jumlah = 0;
        while (j <= m){
            cout << "Masukkan nilai: ";
            cin >> nilai;
            jumlah += nilai;
            j++;
        }
        rerata = jumlah / m;
        cout << "Rerata: " << rerata << endl;
        i++;

    }
    return 0;
}
