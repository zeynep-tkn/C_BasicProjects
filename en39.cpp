#include<stdio.h>   //sekilsoru12
int main()
{
   int a,b,c,bosluk,satir,yildiz=1;
   printf("Bir satir girin: ");
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
  bosluk=1;
  yildiz=yildiz-4;
	for(c=0;c<satir-1;c++)
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
   	yildiz=yildiz-2;
   	bosluk=bosluk+1;
   }
	return 0;
}
/*
CIKTI
....*     4bos1yil
...***    3bos3yil
..*****   2bos5yil
.*******  1bos7yil
********* 0bos9yil
.*******    1bos7yil
..*****     2bos5yil
...***      3bos3yil
....*       4bos1yil






*/
