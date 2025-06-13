#include <iostream>
#include "ATM.cpp"

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

    void display(int index) {
        cout << index << ". " << name << "\t : \tRp." << price << endl;
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

};

class MenuFastFood : public templateMenu {
public:
    // Constructor isi data menu fast food
    MenuFastFood() {
        foodCount = 12;
        drinkCount = 10;

        string foodNames[] = {
            "Cheeseburger\t", "Chicken Burger", "Double Beef Burger",
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
        cout << "\n---------- MENU FAST FOOD ----------\n";
        cout << "Saldo anda saat ini\t : Rp." << dataATM[akunAktif].saldo << endl;
        cout << "------------------------------------" << endl;
        for (int i = 0; i < foodCount; i++) {
            cout << (i + 1) << ". " << foodMenu[i].name << "\t : Rp." << foodMenu[i].price << endl;
        }
        for (int i = 0; i < drinkCount; i++) {
            cout << (foodCount + i + 1) << ". " << drinkMenu[i].name << "\t : Rp." << drinkMenu[i].price << endl;
        }
    }
    
    MenuItem getItemByIndex(int index) {
    if (index >= 1 && index <= foodCount) {
        return foodMenu[index - 1];
    } else if (index > foodCount && index <= foodCount + drinkCount) {
        return drinkMenu[index - foodCount - 1 + 1];
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
            "Basreng", "Cimol Bojot", "Tahu Gejrot",
            "Cireng", "Takoyaki", "Bubur Kacang Hijau",
        };

        int foodPrices[] = {
            5000, 9000, 10000,
            3000, 15000, 7000,
        };

        string drinkNames[] = {
            "Thai Tea", "Green Tea", "Bandrek", 
            "Bajigur", "Cendol", "Kopi",
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
        cout << "\n---------- MENU JAJANAN ----------\n";
        cout << "Saldo anda saat ini\t : Rp." << dataATM[akunAktif].saldo << endl;
        cout << "------------------------------------" << endl;
        for (int i = 0; i < foodCount; i++) {
            cout << (i + 1) << ". " << foodMenu[i].name << "\t : Rp." << foodMenu[i].price << endl;
        }
        for (int i = 0; i < drinkCount; i++) {
            cout << (foodCount + i + 1) << ". " << drinkMenu[i].name << "\t : Rp." << drinkMenu[i].price << endl;
        }
    }

    MenuItem getItemByIndex(int index) {
        if (index >= 1 && index <= foodCount) {
            return foodMenu[index - 1];
        } else if (index > foodCount && index <= foodCount + drinkCount) {
            return drinkMenu[index - foodCount - 1 + 1];
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
    do {
        cout << "\n--- GO-FOOD ---" << endl;
        cout << "1. Fast Food " << endl;
        cout << "2. Jajanan " << endl;
        cout << "3. Kembali ke Menu Utama" << endl;
        cout << "Jawaban: ";
        cin >> userInput5;
        switch (userInput5) {
            case 1:
                pilihItem = -2; // Reset di awal
                while (pilihItem != 0)
                {
                    menu1.displayMenuFastFood();
                    cout << "\nKetik -1 jika ingin mengurutkan makanan berdasarkan harga" << endl;
                    cout << "Pilih nomor menu yang ingin dipesan (0 untuk batal): ";
                    cin >> pilihItem;
                
                    if (pilihItem == -1) {
                        int sortChoice;
                        cout << "1. Urutkan harga dari termurah" << endl;
                        cout << "2. Urutkan harga dari termahal" << endl;
                        cout << "Pilihan: ";
                        cin >> sortChoice;
                    
                        if (sortChoice == 1) {
                            menu1.sortByPrice(); // default ascending
                        } else if (sortChoice == 2) {
                            menu1.sortByPrice(false);    // descending
                            // menu1.displayMenuFastFood();
                        } else {
                            cout << "Pilihan tidak valid untuk pengurutan." << endl;
                        }
                    
                        pilihItem = -2; // supaya tidak dianggap pesanan
                        continue;
                    }
                
                    if (pilihItem > 0) {
                        pesanan = menu1.getItemByIndex(pilihItem);
                        if (pesanan.name != "Invalid") {
                            cout << "Pesanan: " << pesanan.name << " - Rp" << pesanan.price << endl;
                            total += pesanan.price;
                            cout << "Total Harga Sementara: Rp" << total << endl;
                        } else {
                            cout << "Nomor menu tidak valid." << endl;
                        }
                    }
                }
                
                break;

            case 2:
                menu2.displayMenuJajanan();
                cout << "\nPilih nomor menu yang ingin dipesan (0 untuk batal): ";
                cin >> pilihItem;

                if (pilihItem != 0) {
                    pesanan = menu2.getItemByIndex(pilihItem);
                    cout << "Pesanan: " << pesanan.name << " - Rp" << pesanan.price << endl;
                    total += pesanan.price;
                    cout << "Total Harga Sementara: Rp" << total << endl;
                }
                break;

            case 3:
                break;

            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
                break;
        }

    } while (userInput5 != 3); // ulang terus sampai user pilih keluar
}



