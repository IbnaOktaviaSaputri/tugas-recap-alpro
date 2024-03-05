#include <stdio.h>

int main() {
    int A;
  
    printf("Masukan jumlah array : ");
    scanf("%d", &A);
    int array[A];
    printf("Masukan angka setiap elemen : \n");
    for (int i = 0; i < A; i++) {
        scanf("%d", &array[i]);
    }
    int jml=0;
    for (int i = 0; i < A; i++) {
    jml = jml + array[i]; 
    }
    printf("Hasil penjumlahan array : %d", jml);
    
}

