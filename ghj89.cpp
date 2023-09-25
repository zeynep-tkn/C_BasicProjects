#include<stdio.h>
int main()
{
	float a,b,c,t;
	printf("a girin: ");
	scanf("%f",&a);
	printf("\nb girin: ");
    scanf("%f",&b);
	printf("\nc girin: ");
	
	scanf("%f",&c);
	t=(a+b+c)/3;
	printf("sonuc:%f",t);
	printf("\nkaresi:%f",t*t);
	return 0;
	
}
