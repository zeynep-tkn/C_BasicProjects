#include<stdio.h> //diziyi düz ve ters yaz
int main()
{
	int dizi[5]={1,2,3,4,5};
	int i,uzunluk,temp;
	uzunluk=sizeof(dizi)/sizeof(int);
	
	for(i=0;i<uzunluk;i++)
	{
	printf("%d ",dizi[i]);	
	}
	
	printf("\n");

	for(i=uzunluk-1;i>=0;i--)
	printf("%d ",dizi[i]);
	for(i=0;i<uzunluk/2;i++)
	temp=dizi[i];
	dizi[i]=dizi[uzunluk-1-i];
	dizi[uzunluk-1-i]=temp;
	return 0;

}
