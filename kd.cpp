/*
ÖRNEK4
klavyeden istenen üs ve sayiyiyla
 sonucu hesaplayan prog
*/
#include<stdio.h>
int main()
{
  int sayi,us,i;
  printf("lutfen tam sayi girin");
  scanf("%d",&sayi);
  printf("lutfen us icin sayisi girin");
  scanf("%d",&us);
  
  for(i=1;i<us;i++)
  	sayi=sayi*sayi;
  printf("uslu sayi:%d");
	return 0;
}
