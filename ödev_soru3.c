#include<stdio.h>
#include<stdbool.h>

int main(){
	int i,j;
	int A[10];
	
	for(i=0; i<10; i++){
		printf("Sayi giriniz:");
		scanf("%d", &A[i]);
		bool hata = false;
		for(j=0; j<i; j++){
			if(hata == A[j]){
				printf("%d ", A[i]);
			}		
		}
	}
	printf("%d",A[i]);	
	return 0;
	
}