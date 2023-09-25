#include<stdio.h>
int main()
{
	float yaricap,yukseklik,hacim;
	float pi=3.14;
	printf("yaricap ve yukseklik girin");
	scanf("%f",&yaricap);
	scanf("%f",&yukseklik);
	hacim=pi*yaricap*yaricap*yukseklik;
	printf("hacim:%f",hacim);
	return 0;
	
}

