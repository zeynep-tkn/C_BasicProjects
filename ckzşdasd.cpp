//saru13
#include<stdio.h>
int main()
{
   int sayi,ilk,son; 
   int iki,uc,dort;
   printf("bir tam sayi girin: ");
   scanf("%d",&sayi);
   
   if(sayi>9 && sayi<100)
   {
    ilk=sayi% 10;
    iki=(sayi/10)% 10;
    printf("\nGirilen sayinin tersi:%d%d",ilk,iki);
   }
  else if(sayi>99 && sayi<1000)
  {
   ilk=sayi% 10;
   iki=(sayi/10)% 10;
   uc=(sayi/100)% 10;
   printf("\nGirilen sayinin tersi:%d%d%d",ilk,iki,uc);
  }
  else if (sayi>999 && sayi<10000)
  {
   ilk=sayi% 10;
   iki=(sayi/10)% 10;
   uc=(sayi/100)% 10;
   dort=(sayi/1000)% 10;
   printf("\nGirilen sayinin tersi:%d%d%d%d",ilk,iki,uc,dort);
  }
  else if (sayi>9999 && sayi<100000)
  {
   ilk=sayi% 10;
   iki=(sayi/10)% 10;
   uc=(sayi/100)% 10;
   dort=(sayi/1000)% 10;
   son=sayi/10000;
   printf("\nGirilen sayinin tersi:%d%d%d%d%d",ilk,iki,uc,dort,son);
  }
 return 0;
}

