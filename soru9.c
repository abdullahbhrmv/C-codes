#include <stdio.h>

int main()
{
    char karakter;
    printf("Bir karakter girin: ");
    scanf("%c",&karakter);


	(karakter>='A' && karakter<='Z') || (karakter>='a' && karakter<='z')? printf("Bu bir harf"): printf("Bu bir harf degil");



/*    if (karakter>='A' && karakter<='Z')
    	printf("%c bu bir buyuk harfdir.", karakter);
    	
    else if (karakter>='a' && karakter<='z')
    	printf("%c bu bir kucuk harfdir.", karakter);
    	
    else
    	printf("%c bu bir harf degildir.", karakter);
*/
    return 0;
}