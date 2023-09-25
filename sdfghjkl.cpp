#include<stdio.h>   //soru25
int main()
{
   int n,i;
   int fakt,rem;
   printf("Sayi girin: ");
   scanf("%d",&n);
   printf(" ");
   int sum = 0;
   int temp = n;
   while(n)
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
   }
   if(sum == temp)
      printf("%d guclu sayidir",temp);
   else
    printf("%d guclu sayi degildir",temp);
   return 0;
}
