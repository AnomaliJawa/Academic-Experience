#include <stdio.h>

int main() {
    int nilai = 85;

    // Memeriksa apakah nilai lebih dari atau sama dengan 90
    if (nilai >= 90) {
        // Jika kondisi benar, cetak "Nilai A"
        printf("Nilai A\n");
    }
    // Jika nilai tidak lebih dari atau sama dengan 90, cek apakah nilai >= 80
    else if (nilai >= 80) {
        // Jika kondisi benar, cetak "Nilai B"
        printf("Nilai B\n");
    }
    // Jika nilai tidak memenuhi kedua kondisi di atas, cek apakah nilai >= 70
    else if (nilai >= 70) {
        // Jika kondisi benar, cetak "Nilai C"
        printf("Nilai C\n");
    }
    // Jika nilai tidak memenuhi semua kondisi sebelumnya, masuk ke else
    else {
        // Cetak "Nilai D" jika semua kondisi di atas salah
        printf("Nilai D\n");
    }

    return 0;
}