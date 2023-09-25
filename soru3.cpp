//soru3

#include<stdio.h>
int main()
{
	int toplam,i;
	for(i=108;i<199;i=i+9)
	{
		printf("9'a bolunebilen:%d \n",i);
		toplam=toplam+i;
	}
     printf("sayilarin toplami:%d",toplam);
	
	return 0;
}
