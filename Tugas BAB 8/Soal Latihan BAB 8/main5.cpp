#include <iostream>
int main() {
    int total = 25;
    for (int x = 0; x <= total; x++) {
        for (int y = 0; y <= total - x; y++) {
            int z = total - x - y;
            std::cout << "(" << x << ", " << y << ", " << z << ")\n";
        }
    }
    return 0;
}
