#include<stdio.h>
int main()
{
	int abc,toplam,c;
	int ab,a,b;
	printf("lutfen uc bsamakli tam sayi girin");
	scanf("%d",&abc);
	c=abc% 10;
	ab=abc/10;
	b=ab% 10;
	a=ab/10;
	toplam=a+b+c;
	printf("rakamlari toplami: %d",toplam);
	
	
	return 0;
}
