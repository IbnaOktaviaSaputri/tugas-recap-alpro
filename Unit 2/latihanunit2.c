#include <stdio.h>

int i;
int main(){
    int A,B;
    printf("Jumlah Transaksi : \n");
    scanf("%d", &A);
    if(A>0){
    int array[A];
    printf("Masukkan nominal : \n");
    for (int i=0; i<A; i++) {
        scanf("%d", &array[i]);
    }
    int total=0;
    for (int i = 0; i < A; i++) {
    total = total + array[i]; 
    }
    printf("Total pengeluaran hari ini : %d", total);
    }else{
        printf("Tidak ada transaksi hari ini.");
    }
}