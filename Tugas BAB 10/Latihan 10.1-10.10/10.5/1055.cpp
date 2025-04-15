#include <iostream>
using namespace std;

void HitungRatarata(int N, float *u);

int main(){
    float rerata;
    int N;
    cout << "Jumlah peserta ujian: ";
    cin >> N;
    HitungRatarata(N, &rerata);
    cout << "Nilai rata-rata: " << rerata << endl;
    if (rerata < 50){
        cout << "Nilai rata-rata ujian tidak bagus." << endl;
    }
    else{
        cout << "Nilai rata-rata ujian bagus." << endl;
    }
    return 0;
}

void HitungRatarata(int N, float *u){
    float x, jumlah;
    int i;
    jumlah = 0;
    for (i = 1; i <= N; i++){
        cout << "Nilai ujian ke-" << i << ": ";
        cin >> x;
        jumlah = jumlah + x;
    }
    *u = jumlah/N;
}
