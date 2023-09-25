#include<stdio.h>
int main()
{
	int s,k,yildiz=5;
	for(k=1;k<6;k++)                       
	{
    for(s=yildiz;s>=1;s=s-1)
	{
	printf("*");
	}	
	printf("\n");
	yildiz=yildiz-1;	
   }
	return 0;
}
/*
CIKTI
*****
****
***
**
*

*/
