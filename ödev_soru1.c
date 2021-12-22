#include<stdio.h>

int main() {
	int A[5], B[5], C[5];
	int i, j, a;
	
	for(i=0; i<5; i++){
		printf("A dizilerini girin: ");
		scanf("%d", &A[i]);
	}
	
	for(i=0; i<5; i++){
		printf("B dizilerini girin: ");
		scanf("%d", &B[i]);
	}
	
	for(i=0; i<5; i++){
		C[i] = A[i] + B[i];
		printf("C=A+B: %d\n", C[i]);
	}
	return 0;
}