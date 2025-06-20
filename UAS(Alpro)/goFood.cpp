#include <iostream>
#include "myPulsa.cpp"

using namespace std;


void showMenuEcommerce();

const int MAX_ITEM = 30;

class MenuItem {
public:
    string name;
    int price;

    MenuItem() {
        this->name = "";
        this->price = 0;
    }

    MenuItem(string n, int p) {
        this->name = n;
        this->price = p;
    }
};

class templateMenu {
protected:
    int foodCount;
    int drinkCount;
public:
    MenuItem foodMenu[MAX_ITEM];
    MenuItem drinkMenu[MAX_ITEM];
    MenuItem originalDrinkMenu[MAX_ITEM];
    MenuItem originalFoodMenu[MAX_ITEM];

    int getFoodCount() const {
        return foodCount;
    }

    int getDrinkCount() const {
        return drinkCount;
    }

    void sortByPrice(bool ascending = true) {
        // Bubble Sort Makanan
        for (int i = 0; i < foodCount - 1; i++) {
            for (int j = 0; j < foodCount - i - 1; j++) {
                bool condition = ascending ? (foodMenu[j].price > foodMenu[j + 1].price)
                                        : (foodMenu[j].price < foodMenu[j + 1].price);
                if (condition) {
                    MenuItem temp = foodMenu[j];
                    foodMenu[j] = foodMenu[j + 1];
                    foodMenu[j + 1] = temp;
                }
            }
        }

        // Bubble Sort Minuman
        for (int i = 0; i < drinkCount - 1; i++) {
            for (int j = 0; j < drinkCount - i - 1; j++) {
                bool condition = ascending ? (drinkMenu[j].price > drinkMenu[j + 1].price)
                                        : (drinkMenu[j].price < drinkMenu[j + 1].price);
                if (condition) {
                    MenuItem temp = drinkMenu[j];
                    drinkMenu[j] = drinkMenu[j + 1];
                    drinkMenu[j + 1] = temp;
                }
            }
        }
    }

    void resetMenu() {
        for (int i = 0; i < foodCount; i++) {
            foodMenu[i] = originalFoodMenu[i];
        }
        for (int i = 0; i < drinkCount; i++) {
            drinkMenu[i] = originalDrinkMenu[i];
        }
    }

    void hapusItemMenu(bool isFood, int index) {
        if (isFood) {
            if (index < 0 || index >= foodCount) {
                cout << "Index makanan tidak valid.\n";
                return;
            }
            for (int i = index; i < foodCount - 1; i++) {
                foodMenu[i] = foodMenu[i + 1];
            }
            foodCount--;
            cout << "[✓] Menu makanan berhasil dihapus.\n";
        } else {
            if (index < 0 || index >= drinkCount) {
                cout << "Index minuman tidak valid.\n";
                return;
            }
            for (int i = index; i < drinkCount - 1; i++) {
                drinkMenu[i] = drinkMenu[i + 1];
            }
            drinkCount--;
            cout << "[✓] Menu minuman berhasil dihapus.\n";
        }
    }

};

class MenuFastFood : public templateMenu {
public:
    // Constructor isi data menu fast food
    MenuFastFood() {
        foodCount = 12;
        drinkCount = 10;

        string foodNames[] = {
            "Cheeseburger", "Chicken Burger", "Pizza\t",
            "Crispy Chicken", "Spicy Chicken", "Chicken Nuggets",
            "French Fries (S)", "French Fries (M)", "French Fries (L)",
            "Chicken Wings", "Beef Rice Bowl", "Chicken Rice Bowl"
        };

        int foodPrices[] = {
            25000, 24000, 35000,
            22000, 23000, 18000,
            12000, 15000, 18000,
            27000, 32000, 30000
        };

        string drinkNames[] = {
            "Coca-Cola (S)", "Coca-Cola (M)", "Coca-Cola (L)",
            "Sprite\t", "Fanta\t", "Iced Tea\t",
            "Mineral Water", "Chocolate Float", "Vanilla Milkshake", "Coffee\t"
        };

        int drinkPrices[] = {
            8000, 10000, 12000,
            9000, 9000, 7000,
            5000, 13000, 15000, 10000
        };

        tambahkanMakananFastFood(foodNames, foodPrices);
        tambahkanMinumanFastFood(drinkNames, drinkPrices);
        
    }

    void tambahkanMakananFastFood(string foodNames[], int foodPrices[]){
        for (int i = 0; i < foodCount; i++) {
            foodMenu[i] = MenuItem(foodNames[i], foodPrices[i]);
            originalFoodMenu[i] = foodMenu[i];
        }
    }
    
    void tambahkanMinumanFastFood(string drinkNames[], int drinkPrices[]){
        for (int i = 0; i < drinkCount; i++) {
            drinkMenu[i] = MenuItem(drinkNames[i], drinkPrices[i]);
            originalDrinkMenu[i] = drinkMenu[i];
        }
    }

    void displayMenuFastFood() {
        cout << "\n========================================" << endl;
        cout << "|           MENU FAST FOOD             |" << endl;
        cout << "|======================================|" << endl;
        cout << "| -1. Urutkan berdasarkan harga        |" << endl;
        cout << "|======================================|" << endl;
        cout << "| -2. Hapus Menu                       |" << endl;
        cout << "|======================================|" << endl;
        for (int i = 0; i < foodCount; i++) {
            cout << "| " << (i + 1) << ". " << foodMenu[i].name << "\t : Rp." << foodMenu[i].price << endl;
        }
        for (int i = 0; i < drinkCount; i++) {
            cout << "| " << (foodCount + i + 1) << ". " << drinkMenu[i].name << "\t : Rp." << drinkMenu[i].price << endl;
        }
        cout << "=======================================" << endl;
    }
    
    MenuItem getItemByIndex(int index) {
        if (index >= 1 && index <= foodCount) {
            return foodMenu[index - 1];
        } else if (index > foodCount && index <= foodCount + drinkCount) {
            return drinkMenu[index - foodCount - 1 ];
        }
        return MenuItem("Invalid", 0);
    }
};

class MenuJajanan : public templateMenu{
    public:
    // Constructor isi data menu fast food
    MenuJajanan() {
        foodCount = 6;
        drinkCount = 6;
        
        string foodNames[] = {
            "Basreng", "Cimol", "Tahu",
            "Cireng", "Takoyaki", "Bakso",
        };
        
        int foodPrices[] = {
            5000, 9000, 10000,
            3000, 15000, 7000,
        };
        
        string drinkNames[] = {
            "Thai Tea", "Green Tea", "Bandrek", 
            "Bajigur", "Cendol", "Teh Poci",
        };
        
        int drinkPrices[] = {
            5000, 6000, 4000,
            4000, 5000, 3000,
        };
        
        tambahkanMakananJajanan(foodNames, foodPrices);
        tambahkanMinumanJajanan(drinkNames, drinkPrices);
    }
    
    void tambahkanMakananJajanan(string foodNames[], int foodPrices[]){
        for (int i = 0; i < foodCount; i++) { // No need to set foodCount again
            foodMenu[i] = MenuItem(foodNames[i], foodPrices[i]);
            originalFoodMenu[i] = foodMenu[i];
        }
    }
    
    void tambahkanMinumanJajanan(string drinkNames[], int drinkPrices[]){
        for (int i = 0; i < drinkCount; i++) { // No need to set drinkCount again
            drinkMenu[i] = MenuItem(drinkNames[i], drinkPrices[i]);
            originalDrinkMenu[i] = drinkMenu[i];
        }
    }
    
    void displayMenuJajanan() {
        cout << "\n========================================" << endl;
        cout << "|             MENU JAJANAN             |" << endl;
        cout << "|======================================|" << endl;
        cout << "| -1. Urutkan berdasarkan harga        |" << endl;
        cout << "|======================================|" << endl;
        for (int i = 0; i < foodCount; i++) {
            cout << "| "<<  (i + 1) << ". " << foodMenu[i].name << "\t\t : Rp." << foodMenu[i].price << endl;
        }
        for (int i = 0; i < drinkCount; i++) {
            cout << "| " << (foodCount + i + 1) << ". " << drinkMenu[i].name << "\t\t : Rp." << drinkMenu[i].price << endl;
        }
        cout << "======================================" << endl;
    }
    
    MenuItem getItemByIndex(int index) {
        if (index >= 1 && index <= foodCount) {
            return foodMenu[index - 1];
        } else if (index > foodCount && index <= foodCount + drinkCount) {
            return drinkMenu[index - foodCount - 1];
        }
        return MenuItem("Invalid", 0);
    }
};

void showMenuEcommerce(){
    int userInput5;
    int total = 0;
    int pilihItem;
    MenuFastFood menu1;
    MenuJajanan menu2;
    MenuItem pesanan;
    
    // Array untuk menyimpan daftar pesanan
    MenuItem daftarPesanan[100];
    int jumlahPesanan = 0;
    
    do {
        cout << "\n==================================" << endl;
        cout << "|           GO-FOOD              |" << endl;
        cout << "|================================|" << endl;
        cout << "| 1. Fast Food                   |" << endl;
        cout << "| 2. Jajanan                     |" << endl;
        cout << "| 3. Kembali ke Menu Utama       |" << endl;
        cout << "==================================" << endl;
        cout << "Jawaban: ";

        cin >> userInput5;

        switch (userInput5) {
            case 1:
            pilihItem = -2;
            menu1.displayMenuFastFood();
            while (pilihItem != 0) {
                cout << "Pilih nomor pesanan (0 untuk keluar): ";
                cin >> pilihItem;
                
                if (pilihItem == -1) {
                    int sortChoice;
                    cout << "1. Urutkan harga dari termurah" << endl;
                    cout << "2. Urutkan harga dari termahal" << endl;
                    cout << "Pilihan: ";
                    cin >> sortChoice;
                    
                    if (sortChoice == 1) {
                        menu1.sortByPrice(); // ascending
                        menu1.displayMenuFastFood();
                    } else if (sortChoice == 2) {
                        menu1.sortByPrice(false); // descending
                        menu1.displayMenuFastFood();
                        } else {
                            cout << "Pilihan tidak valid untuk pengurutan." << endl;
                        }
                        pilihItem = -2;
                        continue;
                    }
                    
                    if (pilihItem > 0) {
                        pesanan = menu1.getItemByIndex(pilihItem);
                        if (pesanan.name != "Invalid") {
                            cout << "Pesanan: " << pesanan.name << " - Rp" << pesanan.price << endl;
                            total += pesanan.price;
                            cout << "Total Harga Sementara: Rp" << total << endl;
                            
                            // Simpan ke daftar pesanan
                            daftarPesanan[jumlahPesanan] = pesanan;
                            jumlahPesanan++;
                        } else {
                            cout << "Nomor menu tidak valid." << endl;
                        }
                    }
                else if (pilihItem == -2) {
                    int jenis, hapusIndex;
                    cout << "Hapus (1) Makanan atau (2) Minuman? ";
                    cin >> jenis;
                    cout << "Masukkan nomor menu yang ingin dihapus: ";
                    cin >> hapusIndex;
                
                    if (jenis == 1) {
                        menu1.hapusItemMenu(true, hapusIndex - 1);
                    } 
                    else if (jenis == 2) {
                        menu1.hapusItemMenu(false, hapusIndex - menu1.getFoodCount() - 1);                    } 
                    else {
                        cout << "Jenis tidak valid.\n";
                    }
                
                    menu1.displayMenuFastFood(); // Tampilkan ulang
                    pilihItem = -2;
                    continue;
                }
                }
                break;
                
                case 2:
                pilihItem = -2;
                menu2.displayMenuJajanan();
                while (pilihItem != 0) {
                    cout << "Pilih nomor pesanan (0 untuk keluar): ";
                    cin >> pilihItem;
                    
                    if (pilihItem == -1) {
                        int sortChoice;
                        cout << "1. Urutkan harga dari termurah" << endl;
                        cout << "2. Urutkan harga dari termahal" << endl;
                        cout << "Pilihan: ";
                        cin >> sortChoice;
                        
                        if (sortChoice == 1) {
                            menu2.sortByPrice(); // ascending
                            menu2.displayMenuJajanan();
                        } else if (sortChoice == 2) {
                            menu2.sortByPrice(false); // descending
                            menu2.displayMenuJajanan();
                        } else {
                            cout << "Pilihan tidak valid untuk pengurutan." << endl;
                        }
                        pilihItem = -2;
                        continue;
                    }
                    
                    if (pilihItem > 0) {
                        pesanan = menu2.getItemByIndex(pilihItem);
                        if (pesanan.name != "Invalid") {
                            cout << "Pesanan: " << pesanan.name << " - Rp" << pesanan.price << endl;
                            total += pesanan.price;
                            cout << "Total Harga Sementara: Rp" << total << endl;
                            
                            // Simpan ke daftar pesanan
                            daftarPesanan[jumlahPesanan] = pesanan;
                            jumlahPesanan++;
                        } else {
                            cout << "Nomor menu tidak valid." << endl;
                        }
                    }
                }
                break;
                
                case 3:
                break;
                
                default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
                break;
            }

        } while (userInput5 != 3); // Ulang terus sampai keluar
        
        // Setelah keluar, tampilkan daftar pesanan
        if (jumlahPesanan > 0) {
            string konfirmasiPembayaran;
            cout << "\n============================================" << endl;
            cout << "|           DAFTAR PESANAN ANDA            |" << endl;
            cout << "|==========================================|" << endl;
            for (int i = 0; i < jumlahPesanan; i++) {
                cout << "| " << (i + 1) << ". " << daftarPesanan[i].name << " \t- Rp. " << daftarPesanan[i].price << endl;
            }
            cout << "|==========================================|" << endl;
            cout << "| Total Pembayaran\t: Rp. " << total << endl;
            cout << "| Saldo anda saat ini\t: Rp. " << dataPulsa[akunAktif].saldo << endl;
            cout << "| Pesan Sekarang (ya/tidak): ";
            cin >> konfirmasiPembayaran;
            cout << "|==========================================|" << endl;
            if (konfirmasiPembayaran == "ya" || konfirmasiPembayaran == "YA"){
                if (dataPulsa[akunAktif].saldo >= total){
                    dataPulsa[akunAktif].saldo -= total;
                    cout << "| Saldo anda saat ini\t : Rp." << dataPulsa[akunAktif].saldo << endl;
                    cout << "| Kurir akan segera mengantarkan pesanan.  |" << endl;
                    cout << "| mohon tunggu beberapa menit ya!!! \t   |"<< endl;
                    cout << "============================================" << endl;
                    simpanDataAkun();
                }
                else{
                    cout << "Saldo anda tidak cukup..." << endl;
                }
            }
            else {
                cout << "Silahkan datang kembali..." << endl;
            }
        } 
        else {
            cout << "\nAnda belum memesan apapun.\n";
        }
}



