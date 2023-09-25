//soru6

#include<stdio.h>
int main()
{
   int sayi,i,sum,toplam=0;
   printf("Bir tam sayi girin: ");
   scanf("%d",&sayi);
   i=0;
   printf(" Sayilar: ");
   while (i<sayi)
   {
	 sum=2*i+1;
     i++;
     printf("%d ",sum);
	 toplam=toplam+sum;
   }
   printf("\n %d sayinin toplami: %d",sayi,toplam);
   
	return 0;
}
