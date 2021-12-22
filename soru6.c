#include <math.h>
#include <stdio.h>

int main() {
    int sayi, ust_sayi, sonuc;
    
    printf("Sayi giriniz: \n");
    scanf("%d", &sayi);
    
    printf("Ust sayi giriniz: \n");
    scanf("%d", &ust_sayi);

    sonuc = pow(sayi, ust_sayi);

    printf("%d'in %d.kuvveti %d'dur", sayi, ust_sayi, sonuc);
    

    return 0;
}