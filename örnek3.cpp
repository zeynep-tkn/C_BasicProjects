/*
�rnek3
 klavyeden istenen say�n�n fakt�riyelini bulan program
 */
 
#include<stdio.h>
int main()
{
	int a,i,faktoriyel=1;
	printf("lutfen fakt�riyelini istedi�iniz sayiyi girin");
	scanf("%d",&a);
	for(i=a;i>1;i--)
	{
		faktoriyel=faktoriyel*i;
	}
	printf("sonuc:%d",faktoriyel);
	return 0;
}

