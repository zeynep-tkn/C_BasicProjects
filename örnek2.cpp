/*
örnek2
 klavyeden girisi istenen bir sayý kadar sayýyý
 kullanýcýdan alýp ortalamasýný bulan programý yazýn
 */
 
#include<stdio.h>
int main()
{
	int a,i,sayi;
	float sum=0;
	printf("Kac sayinin ort istiyorsaniz o sayiyi yazin:");
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
	printf("bir sayi girin:%d");
	scanf("%d",&sayi);
	sum=sum+sayi;
	}
	printf("ort :%d \n",sum/a);
	return 0;
}
