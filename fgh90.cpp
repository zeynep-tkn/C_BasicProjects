#include<stdio.h>  
int main()
{
   int a,b,yildiz=1,satir,bosluk,c;
   printf("satir sayisi girin: ");
   scanf("%d",&satir);
   bosluk=satir-1;
   for(c=0;c<satir;c++)
   {
   for(a=0;a<bosluk;a++)
   {
   	printf(" ");
   }
   for(b=0;b<yildiz;b++)
   {
   	printf("*");
   }
  printf("\n");
  yildiz=yildiz+2;
  bosluk=bosluk-1;
   }
	return 0;
}
/*
CIKTI
.....*        5bos 1yil
....***       4bos 3yil
...*****      3bos 5yil
..*******     2bos 7yil
.*********    1bos 9yil
***********   0bos 11yil
*/
