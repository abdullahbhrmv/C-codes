#include<stdio.h>
#include<math.h>

int main ()
{
	float a, b, c, delta, kok1, kok2;
	
	printf("a:");
	scanf("%f",&a);
	
	printf("b:");
	scanf("%f",&b);
	
	printf("c:");
	scanf("%f",&c); 
	
	kok1 = (-b+sqrt(pow(b,2)-4*(a*c)))/(2*a);
	
	kok2 = (-b-sqrt(pow(b,2)-4*(a*c)))/(2*a);
	
	if(delta<0)
		printf("Delta sifirdan kucuk oldugu icin kok bulanmaz.");
	
	
	else
		printf("kok1 = %0.2f, kok2 = %0.2f", kok1, kok2);
	
	
	
	return(0);

}