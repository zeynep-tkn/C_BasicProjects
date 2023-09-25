/*
örnek5
veirlen doðal sayýya kadar
 sayýlarýn kübünü alan program
*/

#include<stdio.h>
int main()
{
	int sayi,i;
	
	printf("sayiyi girin");
	scanf("%d",&sayi);
	
	for (i=1;i<sayi;i++)
	printf("%d sayisisnin kubu:%d \n",i,i*i*i);
	
	return 0;
}
