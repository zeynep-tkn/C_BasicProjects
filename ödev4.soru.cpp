#include<stdio.h>
int main()
{
	int uzunKenar,kisaKenar;
	int alan,cevre;
	printf("kisaKenar ve uzunKenar giriniz");
	scanf("%d",&kisaKenar);
	scanf("%d",&uzunKenar);
	alan=kisaKenar*uzunKenar;
	cevre= kisaKenar*2+uzunKenar*2;
	printf("alan:%d",alan);
	printf("cevre:%d",cevre);
	
	return 0;
}
