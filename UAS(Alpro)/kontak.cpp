#include <iostream>
#include <string>
#include <sstream> // untuk istringstream
#include <fstream>
#include <vector>
#include "global.hpp"

using namespace std;

void masukRoomChat(string pengirim, string penerima);

void showMenuKontak() {
    cout << "\n=== KONTAK TERSEDIA ===\n";
    int indexKontak[maxUser];
    int nomor = 0;

    for (int i = 0; i < akunTerdaftar; ++i) {
        if (i == akunAktif) continue;
        cout << nomor + 1 << ". " << usernames[i] << endl;
        indexKontak[nomor++] = i;
    }

    if (nomor == 0) {
        cout << "[!] Tidak ada akun lain.\n";
        return;
    }

    int pilih;
    cout << "Pilih kontak (nomor): ";
    cin >> pilih;
    cin.ignore(); // Bersihkan newline

    if (pilih < 1 || pilih > nomor) {
        cout << "[!] Pilihan tidak valid.\n";
        return;
    }

    int target = indexKontak[pilih - 1];
    string kontakNama = usernames[target];
    
    masukRoomChat(usernames[akunAktif], kontakNama);
}

int no = 1;
void masukRoomChat(string pengirim, string penerima) {
    vector<string> semuaPesan;
    vector<string> tampilPesan;
    vector<int> indexChatAktif;
    string line;

    // Baca semua pesan dari file
    ifstream fileIn("pesan.txt");
    while (getline(fileIn, line)) {
        semuaPesan.push_back(line);
    }
    fileIn.close();

    // Tampilkan pesan 2 arah
    cout << "\n=== Room Chat: " << penerima << " ===\n";
    cout << "[Ketik pesan, /exit untuk keluar, /hapus <no> untuk hapus pesan]\n";

    for (int i = 0; i < semuaPesan.size(); ++i) {
        stringstream ss(semuaPesan[i]);
        string dari, ke, isi;
        getline(ss, dari, '|');
        getline(ss, ke, '|');
        getline(ss, isi);

        if ((dari == pengirim && ke == penerima) || (dari == penerima && ke == pengirim)) {
            cout << no << ". " << dari << ": " << isi << endl;
            tampilPesan.push_back(semuaPesan[i]);
            indexChatAktif.push_back(i); // simpan indeks asli dari semuaPesan
            no+=1;
        }
    }

    // Mulai chat
    while (true) {
        cout << no << ". " << pengirim << ": ";
        string pesan;
        getline(cin, pesan);

        if (pesan == "/exit") {
            cout << "[Keluar dari room chat]\n";
            break;
        } else if (pesan.rfind("/hapus ", 0) == 0) {
            int hapusNomor = stoi(pesan.substr(7));
            if (hapusNomor < 1 || hapusNomor > tampilPesan.size()) {
                cout << "[!] Nomor tidak valid.\n";
                continue;
            }

            int indexHapus = indexChatAktif[hapusNomor - 1];

            stringstream ss(semuaPesan[indexHapus]);
            string dari, ke, isi;
            getline(ss, dari, '|');
            getline(ss, ke, '|');
            getline(ss, isi);

            if (dari != pengirim) {
                cout << "[!] Anda hanya bisa menghapus pesan yang Anda kirim.\n";
                continue;
            }

            semuaPesan.erase(semuaPesan.begin() + indexHapus);
            
            // Tulis ulang file
            ofstream fileOut("pesan.txt", ios::trunc);
            for (const string& baris : semuaPesan) {
                fileOut << baris << endl;
            }
            fileOut.close();
            
            no = 1;
            cout << "[✓] Pesan nomor " << hapusNomor << " berhasil dihapus.\n";
            return masukRoomChat(pengirim, penerima);

        } else {
            // Tambah pesan ke file
            ofstream fileOut("pesan.txt", ios::app);
            fileOut << pengirim << "|" << penerima << "|" << pesan << endl;
            fileOut.close();
        }
        no += 1;
    }
}
