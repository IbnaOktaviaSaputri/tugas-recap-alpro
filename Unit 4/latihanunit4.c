#include <stdio.h>

int persegi(int sisi) {
    int keliling = 4 * sisi;
    int luas = sisi * sisi;
    int volume = sisi*sisi*sisi;
    printf("Keliling persegi: %d\n", keliling);
    printf("Luas persegi: %d\n", luas);
    printf("Volume kubus: %d\n", volume);
}

int main() {
    int sisi;
    
    printf("Masukkan panjang sisi persegi: ");
    scanf("%d", &sisi);

    persegi(sisi);
   

}
