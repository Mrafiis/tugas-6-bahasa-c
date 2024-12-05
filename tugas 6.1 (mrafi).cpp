#include <stdio.h>

int main() {
    // Inisialisasi variabel untuk nilai awal deret
    int i;

    // Mencetak deret 10, 20, 30, ..., 100
    for(i = 10; i <= 100; i += 10) {
        printf("%d ", i); // Mencetak nilai i
    }

    return 0;
}
