#include <stdio.h>

int main(){
    int a, b, c;
    printf("Ucgenin a,b ve c kenarlarini girin: \n");
    scanf("%d %d %d", &a, &b, &c);
    
    if((a<b+c) && (b<a+c) && (c<a+b))
        printf("Bu bir ucgendir");

    else
        printf("Bu bir ucgen degildir");
        
    return 0;
}