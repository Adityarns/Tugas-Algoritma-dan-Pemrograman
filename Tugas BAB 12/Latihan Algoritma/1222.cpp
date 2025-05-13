#include <iostream>
using namespace std;

bool larikSama(int A[], int B[], int N) {
    int i = 0;
    bool sama = true;

    while (i < N && sama) {
        if (A[i] == B[i]) {
            i++;
        } else {
            sama = false;
        }
    }

    return sama;
}

int main() {
    const int N = 5;
    int A[N] = {1, 2, 3, 4, 5};
    int B[N] = {1, 2, 3, 4, 5}; 

    if (larikSama(A, B, N)) {
        cout << "Larik A dan B sama." << endl;
    } else {
        cout << "Larik A dan B tidak sama." << endl;
    }

    return 0;
}
