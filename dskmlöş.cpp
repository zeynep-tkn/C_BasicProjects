#include <stdio.h>  //soru29
int main()
{
   int n,i,kucuk,buyuk;
   int fakt,rem;
   printf(" ");
   printf("Arasindaki gucluleri yazdirmak istediginiz kucuk sayi girin: ");
   scanf("%d",&kucuk);
   printf("Arasindaki gucluleri yazdirmak istediginiz buyuk sayi girin: ");
   scanf("%d",&buyuk);
   int sum = 0;
   int temp = n;
 printf("Guclu sayilar: ");
   while(kucuk<n && buyuk>n)
   {
      i = 1,fakt = 1;
      rem = n % 10;
      while(i<= rem)
	  {
        fakt = fakt * i;
        i++;
      }
      sum = sum + fakt;
      n = n / 10;
      if(sum == temp)
      printf("%d ",temp);  
   }
    return 0;
}
