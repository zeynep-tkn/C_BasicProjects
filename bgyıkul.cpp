#include<stdio.h>
int main()
{
   int sayi,ilk,son; 
   int iki,uc,dort;
   printf("bir tam sayi girin: ");
   scanf("%d",&sayi);
   son=sayi/10000;
   ilk=sayi% 10;
   iki=(sayi/10)% 10;
   uc=(sayi/100)% 10;
   dort=(sayi/1000)% 10;
   son=sayi/10000;
   printf("\nGirilen sayinin tersi:%d%d%d%d%d",ilk,iki,uc,dort,son);
 return 0;
}



