#include<stdio.h>     // printf ve scanf fonk i�in tan�mlanan k�t�phane
#define PI 3.14       //bir sabit de�er tan�mlad�k
int main()
{
	int r;
	float hacim;
    printf("yaricapi girin: ");
    scanf("%d",&r);
	hacim= PI*r*r ;
	printf("kurenin hacmi%f'dir",hacim);         
	return 0;
}

