//soru4

#include<stdio.h>
int main()
{
	int sayi,i,toplam=0;
	printf("bir tam sayi girin: ");
	scanf("%d",&sayi);
	for(i=1;i<sayi+1;i++)
	{
		printf("sayi:%d \n",i);
		toplam=toplam+i;
	}
	printf("sayilarin toplami: %d ",toplam);
	return 0;
}
