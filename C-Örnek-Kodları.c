#include<stdio.h>


int main()
{
	int u, i, r;                                       ///soru 1
	printf("Direnci giriniz(r):");
	scanf("%d", &r);
	printf("Akimi girniz(i):");
	scanf("%d", &i);
	u = r * i;
	printf("Gerilimin degeri(u): %d \n", u);
	
	
	float alan, kenar, yukseklik;                  ///soru 2
	printf("Kenar degerini giriniz: \n");
	scanf("%f", &kenar);
	printf("Yukseklik degerini giriniz: \n");
	scanf("%f", &yukseklik);
	alan = (kenar * yukseklik) / 2;
	printf("Ucgenin alani: %0.3f \n", alan);
	
	
	float sonuc, puan1, puan2, puan3, puan4, puan5, puan6;              ///soru 3
	printf("6 tane dersden aldiginiz notlari giriniz: \n");
	scanf("%f %f %f %f %f %f", &puan1, &puan2, &puan3, &puan4, &puan5, &puan6);
	sonuc = puan1 + puan2 + puan3 + puan4 + puan5 + puan6;
	sonuc = sonuc / 6;
	printf("Not ortalamaniz: %f \n", sonuc);
	
	
	int kalanGun, yil, hafta, gun;                        ///soru 4
	printf("Gun giriniz: ");
	scanf("%d", &gun);
	
	yil = gun / 365;
	printf("Yil: %d \n", yil);
	
	hafta = (gun - (yil * 365))/7;
	printf("Hafta: %d \n", hafta);
	
	kalanGun = gun - (hafta * 7) - (yil * 365);
	printf("Gun: %d \n", kalanGun); 
		
	int yas, suanki_yil, dogum_yil;                                  ///soru 5
	printf("Dogdunuz yili griniz: \n");
	scanf("%d", &dogum_yil);
	printf("Suanki yili giriniz: \n");
	scanf("%d", &suanki_yil);
	yas = suanki_yil - dogum_yil;
	printf("Su anki yasiniz: %d \n", yas);

	
	float sm, m, km;                          ///soru 6  
	printf("Santimetreyi giriniz: ");
	scanf("%f", &sm);
	m = sm / 100;
	km = sm / 100000;
	printf("Santimetrenin Metre degeri: %0.2f \n", m);
	printf("Santimetrenin Kilometre degeri: %0.3f \n", km);
	


    int sayi;                                 ///soru 7
 
    printf("Bir sayi girin: ");
    scanf("%d",&sayi);  
 
    if (sayi % 2 == 0)
	{
    	printf("Girdiginiz sayi Cift \n");
	}
    	
    else
	{
    	printf("Girdiginiz sayi Tek \n");
	}

	

	return 0;
}