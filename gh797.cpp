#include<stdio.h>   //sekilsoru34
int main()
{
   int satir,a,b,c,i=1;
   printf("Satir sayisini girin: ");
   scanf("%d",&satir);
   b=i;
   for(c=0;c<satir;c++)
   {
   	for(a=0;a<satir;a++)
   	{
   	printf("%d",b);
   	b++;
	}
	i++;
   	printf("\n");
   	b=i;
   }
	return 0;
}
/*
CIKTI
12345
23456 
34567   
45678
56789
*/
