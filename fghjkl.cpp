//soru23
#include <stdio.h>
int main()
{
	int sayi,i,toplam=0;
	printf("bir sayi girin: ");
	scanf("%d",&sayi);

	printf("Sayinin pozitif bolenleri:");
	
	for(i=1;i<sayi;i++)
	{
	   if(sayi% i==0)
	   {
	 	printf(" %d",i);
	    toplam=i+toplam;
	   }
	}
	printf("\nToplam=%d",toplam);
	if(toplam==sayi)
	{
		printf("\n%d sayisi mukemmel sayidir",sayi);
	}
	else
	printf("\n%d sayisi mukemmel sayi degildir!",sayi);
    return 0;
}

