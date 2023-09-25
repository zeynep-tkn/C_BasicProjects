#include<stdio.h>  //çs4
int main()
{
	int i;
	float ort,toplam=0;
	float arr[5]={2.3,3.1,4.2,5,7};
	for(i=0;i<5;i++){
		printf("%.2f\n",arr[i]);
	}
	for(i=0;i<5;i++)
	{
		toplam=toplam+arr[i];
	}
ort=toplam/5;
printf("toplam=%.2f ",toplam);
printf("ort=%.2f ",ort);
	return 0;
}
