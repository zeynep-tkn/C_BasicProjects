/*
ÖRNEK2
klavyeden istenen sayi kadar ve
 yazilan sayilarin ort veren prog
*/
#include<stdio.h>
int main()
{
  float a,sayi;	
  float toplam=0;
  printf("kac sayinin ortalamasini istiyorsaniz girin:");
  scanf("%f",&a);
  
  for (1;1<a;++a)
  {
  	printf("lutfen bir sayi girin:");
  	scanf("%f",&sayi);
  	toplam=sayi+toplam;
  }
  printf("ort: %.2f",toplam/a);
  
	return 0;
}
