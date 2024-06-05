#include <stdio.h>


void cetak(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}



int main() {
    // Definisikan Array dan pointer yang digunakan
    int arr[] = {1, 6, 13, 16, 25, 26};
    int *p = arr;

    // Cetak isi array sebelum perubahan
    printf("Daftar halaman sebelum perubahan:\n");
    cetak(arr, 6);

    // Ubah value pada Array 
    *(p + 1) += 2;  // bab 2 bertambah 2 halaman
    *(p + 2) += 5;  // bab 3 bertambah 3 halaman (+2 sebelumnya)
    *(p + 3) += 5;  // bab 4 bertambah 0 halaman (+2+3 sebelumnya)
    *(p + 4) += 6;  // bab 5 bertambah 1 halaman (+2+3 sebelumnya)
    *(p + 5) += 6;  // bab 6 bertambah 0 halaman (+2+3+1 sebelumnya)
 

    // Cetak isi array setelah perubahan
    printf("Daftar halaman setelah perubahan:\n");
    cetak(arr, 6);

    return 0;
}