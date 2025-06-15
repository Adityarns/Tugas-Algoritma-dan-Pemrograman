#include <iostream>
using namespace std;

void TurunkanHarga(float HargaJual[], int N, float p) {
    float diskonHarga;
    for (int i = 0; i < N; i++) {
        diskonHarga = (p / 100.0) * HargaJual[i];
        HargaJual[i] = HargaJual[i] - diskonHarga;
    }
}

int main() {
    int N;
    float p;

    cout << "Masukkan jumlah barang: ";
    cin >> N;

    float HargaJual[N];

    for (int i = 0; i < N; i++) {
        cout << "Harga barang ke-" << (i + 1) << ": ";
        cin >> HargaJual[i];
    }

    cout << "Masukkan persen diskon (%): ";
    cin >> p;

    TurunkanHarga(HargaJual, N, p);

    cout << "\nHarga setelah diskon:\n";
    for (int i = 0; i < N; i++) {
        cout << "Barang ke-" << (i + 1) << ": " << HargaJual[i] << endl;
    }

    return 0;
}
