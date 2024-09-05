#include <stdio.h>

int main() {
    int i = 1; // Inisialisasi variabel i
    
    // While loop akan berjalan selama kondisi (i <= 5) bernilai benar
    while (i <= 5) {
        // Cetak nilai i pada setiap iterasi
        printf("Ini adalah iterasi ke-%d\n", i);
        
        i++; // Tambah nilai i sebesar 1 pada setiap iterasi
    }

    return 0;
}