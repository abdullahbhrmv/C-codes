#include<stdio.h>
int main(){
    int i, n;
    
    printf("Ogrenci sayisini girin: ");
    scanf("%d", &n);
    
    int A[n], ortalama, toplam = 0.0;
    
    for(i=0; i<n; i++){
        printf("%d.notunu girin: ", i+1);
        scanf("%d", &A[i]);
        toplam += A[i];
    }
    ortalama = toplam / n;
    printf("Ortalama: %d\n", ortalama);
    
    for(i=0; i<n; i++){
        if (A[i]<ortalama){
            printf("kaldi: %d\n", A[i]);
        }
        else{
			printf("gecti: %d\n", A[i]);
		}
    }
    return 0;
}