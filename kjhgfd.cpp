#include<stdio.h>
int main()
{
	float den,teo,sonuc;
	printf("den girin: ");
	scanf("%f",&den);
	printf("teo girin: ");
	scanf("%f",&teo);
	
	sonuc=(teo-den)/teo*100;
	printf("sonuc:%f",sonuc);
	return 0;
}
