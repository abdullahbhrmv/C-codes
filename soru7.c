#include<stdio.h>
#include<math.h>
#define PI 3.141159265

int main() {
    
    double cosx, sinx, x, enter;
    
    printf("Aci giriniz: \n");
    scanf("%lf",&enter);
    
    x = PI / 180.0 ;
    
    sinx = sin(enter * x);
    cosx = cos(enter * x);
    
    printf("sinx degeri : %lf \ncosx degeri : %lf", cosx, sinx);
    
    return 0;
               
}

	


