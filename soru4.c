#include<stdio.h>

int main(){
	
	int girdi, yas;
	
	printf("Yasinizi giriniz: \n");
	scanf("%d", &yas);
	
	if(yas<60){	
	
		printf("Ogrenci iseniz 1'e, degilseniz 0'a basin: \n");
		scanf("%d", &girdi);
	
		if(girdi==1 && yas<=30)
		printf("Ogrenci ve 30 yasindan kucuk olanlar icin: 2.50 tl");
		
		else if(girdi==1 && yas>30)
			printf("Ogrenci ve 30 yasindan buyukler icin: 2.75 tl");
			
		else if(girdi==0 && yas<60)
			printf("Sizin icin normal tarife uygulanacak: 3.0 tl");

	}

	else
		printf("Sizin icin ucretsizdir.");
	
	return 0;
}