/*
örnek4
klavyeden girilen tam sayi ve tam üs 
degerine gore üslü sayinin karsiligini 
bulan program
*/
#include<stdio.h>
int main()
{
	int sayi,us,i,sonuc=1;

	printf("bir sayi girin:");
	scanf("%d",&sayi);
	
	printf("bir us girin");
	scanf("%d",&us);
	
	for(i=0;i<us;i++)
	 sonuc=sonuc*sayi;
	
	printf("sonuc:%d",sonuc);
	return 0;
}
