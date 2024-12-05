#include <stdio.h>

int main() {
    // Inisialisasi kecepatan dan waktu
    int kecepatan = 2;  // dalam meter/detik
    int waktu = 100;    // dalam detik

    // Menghitung jarak yang ditempuh
    int jarak = kecepatan * waktu;

    // Mencetak hasil perhitungan
    printf("Jarak yang ditempuh setelah %d detik adalah %d meter.\n", waktu, jarak);

    return 0;
}
