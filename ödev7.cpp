#include<stdio.h>
int main()
{
	int fiyat;
	int toplam;
	printf("bir fiyat giriniz");
	scanf("%d",&fiyat);
	toplam=fiyat*18/100+fiyat;
	printf("kdv'li toplam fiyat:%d",toplam);
	
	return 0;
}
