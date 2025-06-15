    #include <iostream>
    using namespace std;

    const int Nmax = 100;

    void hitungModus(int a[], int n, int& modus, int& frekModus) {
        int i = 0, kandidatModus, frekKandidatModus;
        frekModus = 0;
        bool masihSama;
        while(i < n){
            kandidatModus = a[i];
            frekKandidatModus = 1;
            i += 1;
            masihSama = true;
            while (masihSama && i<n){
                if (a[i] == kandidatModus){
                    frekKandidatModus += 1;
                    i += 1;
                }
                else{
                    masihSama = false;
                }
            }
            if (frekKandidatModus >= frekModus){
                modus = kandidatModus;
                frekModus = frekKandidatModus;
            }
            
        }
    }

    int main() {
        int n, hasil, frek;
        int a[Nmax];

        cout << "Masukkan jumlah array: ";
        cin >> n;

        for (int i = 0; i < n; i++) {
            cout << "Array ke-" << (i + 1) << ": ";
            cin >> a[i];
        }

        hitungModus(a, n, hasil, frek);

        cout << "\nModus: " << hasil << endl;
        cout << "Frekuensi Modus: " << frek << endl;

        return 0;
    }
