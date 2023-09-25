//birden yüze kadar sayilarin toplamini bul
#include<stdio.h>
int main()
{
	int a,toplam=0;
	for(a=1;a<100;a=a+1)
		toplam=a+toplam;
	printf("toplam :%d \n",toplam);
	return 0;
}

