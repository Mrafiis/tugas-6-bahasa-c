#include <stdio.h>

int main() {
    // Inisialisasi variabel untuk nilai awal deret
    int i;

    // Mencetak deret 100, 95, 90, ..., 55
    for(i = 100; i >= 55; i -= 5) {
        printf("%d ", i); // Mencetak nilai i
    }

    return 0;
}
