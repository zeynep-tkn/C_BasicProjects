#include<stdio.h>     // printf ve scanf fonk için tanýmlanan kütüphane
#define PI 3.14       //bir sabit deðer tanýmladýk
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

