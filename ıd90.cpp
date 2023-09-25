#include<stdio.h>
int main()
{
	int sayi,a;
	printf("sayi girin: ");
	scanf("%d",&sayi);
	printf("tersi: ");
	while(sayi>0)
	{
	a=sayi%10;
	sayi=sayi/10;
	printf("%d",a);	
	}
	
	
	
	return 0;
}
