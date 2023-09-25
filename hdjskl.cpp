#include<stdio.h> //alýþtýrma2
int main()
{
	int satir,yildiz=1,i,a;
	printf("Satir: ");
	scanf("%d",&satir);
	
	for(a=0;a<satir;a++)
	{
	  for(i=0;i<yildiz;i++)
	  {
	   printf("*");	
	  }
	printf("\n");
	yildiz++;		
	}
	return 0;
}
/*

*
**
***
****
*****

*/
