#include<stdio.h>   //sekilsaru9
int main()
{
   int yildiz,bosluk,a,satir,b,c;
   printf("Satir sayisi yazin: ");
   scanf("%d",&satir);
   yildiz=satir*2-1;
   bosluk=0;
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
   	yildiz=yildiz-2;
   	printf("\n");
   	bosluk=bosluk+1;
   }
	return 0;
}
/*
CIKTI
*******    0bos7yil
 *****     1bos5yil
  ***      2bos3yil
   *       3bos1yil
*/
