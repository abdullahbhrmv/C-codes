#include<stdio.h>

int main(){
	
	float kilo, boy, sonuc;
	
	printf("Kilonuzu giriniz: \n");
	scanf("%f", &kilo);
	printf("Boyunuzu giriniz: \n");
	scanf("%f", &boy);
	
	sonuc = kilo / (boy*boy);
	
	
	if(sonuc<18.5)
		printf("Zayifsiniz");
	
	else if(sonuc>=18.5 && sonuc<=24.9)
		printf("Normal");
		
	else if(sonuc>=25 && sonuc<=29.9)
		printf("Fazla kilolu");
		
	else if(sonuc>=30 && sonuc<=34.9)
		printf("1.dereceden obez");
		
	else if(sonuc>=35 && sonuc<=39.9)
		printf("2.dereceden obez");
		
	else
		printf("3.derecede obez");
		
	
	return 0;
}