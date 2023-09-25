//soru6

#include<stdio.h>
int main()
{
   int sayi,i,sum=1,toplam=0;
   printf("Bir tam sayi girin: ");
   scanf("%d",&sayi);
   i=1;
   printf(" Sayilar: %d",sum);
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
