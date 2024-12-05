#include <stdio.h>

int main() {
    // Inisialisasi variabel untuk nilai awal deret
    int i;
    int num = 1;  // Nilai awal adalah 1

    // Mencetak deret 1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024
    for(i = 1; i <= 1024; i *= 2) {
        printf("%d ", i); // Mencetak nilai i
    }

    return 0;
}
