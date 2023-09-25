#include<stdio.h>
int main()
{
	int abcd,onluk,abc,ab;
	int a,b,c,d;  
	printf("4 basamakli ikilik tabanda sayi giriniz");
	scanf("%d",&abcd);
	d=abcd%10;
	abc=abcd/10;
	c=abc%10;
	ab=abc/10;
	b=ab%10;
	a=ab/10;
	onluk=1*d+2*c+4*b+8*a;
	printf("onluk tabanda:%d",onluk);
	return 0;
}
