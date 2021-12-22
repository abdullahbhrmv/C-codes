#include<stdio.h>
#include <ctype.h>

int main(){
	
	char karakter;
    printf("Bir harf girin: ");
    scanf("%c", &karakter);


	(isupper(karakter))? printf("Bu bir buyuk harf."): printf("Bu bir kucuk harf.");
	
	
/*	if(isupper(karakter))
       printf("%c buyuk harftir", karakter );
    else 
       printf("%c kucuk harftir", karakter );
*/	
	
	return 0;	
}