#include <iostream>
#include "myPulsa.cpp"

using namespace std;


void showMenuGoFood();

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
            cout << "\n==================================" << endl;
            cout << "| Menu makanan berhasil dihapus. |\n";
            cout << "==================================" << endl;
        } else {
            if (index < 0 || index >= drinkCount) {
                cout << "Index minuman tidak valid.\n";
                return;
            }
            for (int i = index; i < drinkCount - 1; i++) {
                drinkMenu[i] = drinkMenu[i + 1];
            }
            drinkCount--;
            cout << "\n==================================" << endl;
            cout << "| Menu minuman berhasil dihapus. |\n";
            cout << "==================================" << endl;
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
        cout << "| -2. Hapus Menu                       |" << endl;
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

void showMenuGoFood() {
    int userInput5;
    int total = 0;
    int pilihItem;
    MenuFastFood menu1;
    MenuJajanan menu2;
    MenuItem pesanan;
    MenuItem daftarPesanan[100];
    int jumlahPesanan = 0;

    do {
        cout << "\n==================================" << endl;
        cout << "|           GO-FOOD              |" << endl;
        cout << "==================================" << endl;
        cout << "| 1. Fast Food                   |" << endl;
        cout << "| 2. Jajanan                     |" << endl;
        cout << "| 3. Kembali ke Menu Utama       |" << endl;
        cout << "==================================" << endl;
        userInput5 = inputInt("Jawaban: ");

        switch (userInput5) {
            case 1:
            pilihItem = -2;
            menu1.displayMenuFastFood();
            while (pilihItem != 0) {
                pilihItem = inputInt("| Pilih nomor pesanan (0 untuk keluar): ");
                cout << "==================================" << endl;

                    if (pilihItem == -1) {
                        int sortChoice;
                        cout << "==================================" << endl;
                        cout << "|       URUTKAN HARGA MENU       |" << endl;
                        cout << "==================================" << endl;
                        cout << "| 1. Termurah                    |" << endl;
                        cout << "| 2. Termahal                    |" << endl;
                        cout << "==================================" << endl;
                        sortChoice = inputInt("Pilihan: ");

                        if (sortChoice == 1) {
                            menu1.sortByPrice();
                            menu1.displayMenuFastFood();
                        } else if (sortChoice == 2) {
                            menu1.sortByPrice(false);
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
                            cout << "==================================" << endl;
                            cout << "|         PESANAN ANDA           |" << endl;
                            cout << "==================================" << endl;
                            cout << "| " << pesanan.name << " - Rp" << pesanan.price << endl;
                            total += pesanan.price;
                            cout << "| Total Sementara: Rp" << total << endl;
                            cout << "==================================" << endl;
                            daftarPesanan[jumlahPesanan++] = pesanan;
                        } else {
                            cout << "==================================" << endl;
                            cout << "|     Nomor menu tidak valid     |" << endl;
                            cout << "==================================" << endl;
                        }
                    } else if (pilihItem == -2) {
                        int jenis = inputInt("| Hapus (1) Makanan atau (2) Minuman? ");
                        int hapusIndex = inputInt("| Masukkan nomor menu yang ingin dihapus: ");
                        if (jenis == 1) {
                            menu1.hapusItemMenu(true, hapusIndex - 1);
                        } else if (jenis == 2) {
                            menu1.hapusItemMenu(false, hapusIndex - menu1.getFoodCount() - 1);
                        } else {
                            cout << "Jenis tidak valid.\n";
                        }
                        menu1.displayMenuFastFood();
                        pilihItem = -2;
                        continue;
                    }
                }
                break;
            case 2:
                pilihItem = -2;
                menu2.displayMenuJajanan();
                while (pilihItem != 0) {
                    pilihItem = inputInt("| Pilih nomor pesanan (0 untuk keluar): ");
                    cout << "==================================" << endl;
                    
                    if (pilihItem == -1) {
                        int sortChoice;
                        cout << "==================================" << endl;
                        cout << "|       URUTKAN HARGA MENU       |" << endl;
                        cout << "==================================" << endl;
                        cout << "| 1. Termurah                    |" << endl;
                        cout << "| 2. Termahal                    |" << endl;
                        cout << "==================================" << endl;
                        sortChoice = inputInt("Pilihan: ");
                        
                        if (sortChoice == 1) {
                            menu2.sortByPrice();
                            menu2.displayMenuJajanan();
                        } else if (sortChoice == 2) {
                            menu2.sortByPrice(false);
                            menu2.displayMenuJajanan();
                        } else {
                            cout << "Pilihan tidak valid untuk pengurutan." << endl;
                        }
                        pilihItem = -2;
                        continue;
                    }
                    if (pilihItem == -2) {
                        int jenis = inputInt("| Hapus (1) Makanan atau (2) Minuman? ");
                        cout << "==================================" << endl;
                        int hapusIndex = inputInt("| Masukkan nomor menu yang ingin dihapus: ");
                        if (jenis == 1) {
                            menu2.hapusItemMenu(true, hapusIndex - 1);
                        } else if (jenis == 2) {
                            menu2.hapusItemMenu(false, hapusIndex - menu2.getFoodCount() - 1);
                        } else {
                            cout << "Jenis tidak valid.\n";
                        }
                        menu2.displayMenuJajanan();
                        pilihItem = -2;
                        continue;
                    }

                    if (pilihItem > 0) {
                        pesanan = menu2.getItemByIndex(pilihItem);
                        if (pesanan.name != "Invalid") {
                            cout << "==================================" << endl;
                            cout << "|         PESANAN ANDA           |" << endl;
                            cout << "==================================" << endl;
                            cout << "| " << pesanan.name << " - Rp" << pesanan.price << endl;
                            total += pesanan.price;
                            cout << "| Total Sementara: Rp" << total << endl;
                            cout << "==================================" << endl;
                            daftarPesanan[jumlahPesanan++] = pesanan;
                        } else {
                            cout << "==================================" << endl;
                            cout << "|     Nomor menu tidak valid     |" << endl;
                            cout << "==================================" << endl;
                        }
                    }
                }
                break;
            case 3:
                break;
            default:
                cout << "==================================" << endl;
                cout << "|     Pilihan tidak valid.       |" << endl;
                cout << "==================================" << endl;
                break;
        }

    } while (userInput5 != 3);

    if (jumlahPesanan > 0) {
        string konfirmasiPembayaran;
        cout << "\n============================================" << endl;
        cout << "|           DAFTAR PESANAN ANDA            |" << endl;
        cout << "============================================" << endl;
        for (int i = 0; i < jumlahPesanan; i++) {
            cout << "| " << (i + 1) << ". " << daftarPesanan[i].name
                 << "\t- Rp. " << daftarPesanan[i].price << endl;
        }
        cout << "============================================" << endl;
        cout << "| Total Pembayaran     : Rp. " << total << endl;
        cout << "| Saldo Anda saat ini  : Rp. " << dataPulsa[akunAktif].saldo << endl;
        cout << "| Pesan Sekarang (ya/tidak)? ";
        cin >> konfirmasiPembayaran;
        cout << "============================================" << endl;

        if (konfirmasiPembayaran == "ya" || konfirmasiPembayaran == "YA") {
            if (dataPulsa[akunAktif].saldo >= total) {
                dataPulsa[akunAktif].saldo -= total;
                simpanDataAkun();
                cout << "============================================" << endl;
                cout << "|     PESANAN SEDANG DIANTARKAN KURIR      |" << endl;
                cout << "|   Mohon tunggu beberapa menit yaa :)     |" << endl;
                cout << "|   Sisa saldo Anda : Rp. " << dataPulsa[akunAktif].saldo << endl;
                cout << "============================================" << endl;
            } else {
                cout << "============================================" << endl;
                cout << "|       Saldo anda tidak cukup...          |" << endl;
                cout << "============================================" << endl;
            }
        } else {
            cout << "============================================" << endl;
            cout << "|       Silakan datang kembali...          |" << endl;
            cout << "============================================" << endl;
        }
    } else {
        cout << "============================================" << endl;
        cout << "|      Anda belum memesan apapun.          |" << endl;
        cout << "============================================" << endl;
    }
}
