/*
�rnek2
 klavyeden girisi istenen bir say� kadar say�y�
 kullan�c�dan al�p ortalamas�n� bulan program� yaz�n
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
