#include <stdio.h>

int main() {
    int i = 1; // Inisialisasi variabel i
    
    // do-while loop akan menjalankan blok kode setidaknya sekali
    do {
        // Cetak nilai i pada setiap iterasi
        printf("Ini adalah iterasi ke-%d\n", i);
        
        i++; // Tambah nilai i sebesar 1 pada setiap iterasi
    } while (i <= 5); // Kondisi loop diperiksa setelah blok kode dijalankan

    return 0;
}
