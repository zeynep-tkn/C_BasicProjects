/*
ÖRNEK3
klavyeden istenen sayinin 
faktöriyelini bulan prog
*/

#include<stdio.h>
int main()
{
	int sayi,fakt=1,i;
  printf("faktoriyelini istediginiz sayiyi girin:");
  scanf("%d",&sayi);
  for(i=1;i<=sayi;i++)
  {
  	fakt=fakt*i;
  }
   printf("faktoriyel:%d",fakt);
	return 0;
}
