#include <stdio.h>  // Mengimpor header untuk operasi input dan output standar

int main() {
    int angka;  // Mendeklarasikan variabel integer untuk menyimpan input dari pengguna

    // Menampilkan pesan untuk meminta input dari pengguna
    printf("Masukkan sebuah angka: ");  // Output: meminta pengguna untuk memasukkan angka

    // Membaca input dari pengguna dan menyimpannya ke dalam variabel 'angka'
    scanf("%d", &angka);  // Input: membaca angka yang dimasukkan oleh pengguna

    // Menampilkan kembali angka yang dimasukkan oleh pengguna
    printf("Angka yang Anda masukkan adalah: %d\n", angka);  // Output: menampilkan angka yang telah dimasukkan

    return 0;  // Mengakhiri program
}