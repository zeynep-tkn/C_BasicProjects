#include<stdio.h> //alýþtýrma3
int main()
{
	int satir,yildiz,i,a,c,sum;
	printf("Satir: ");
	scanf("%d",&satir);
	sum=1;
	for(a=0;a<satir-1;a++)
	{
		for(c=0;c<sum;c++)
		printf("*");
		
		printf("\n");
		sum++;
	}
	yildiz=satir;
	for(a=0;a<satir;a++)
	{
	  for(i=0;i<yildiz;i++)
	  {
	   printf("*");	
	  }
	printf("\n");
	yildiz--;		
	}
	return 0;
}
/*
*
**
***
****
*****
*****
****
***
**
*

*/
