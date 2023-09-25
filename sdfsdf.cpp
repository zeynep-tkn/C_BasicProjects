/*
KONTROL ÝFADELERÝ
-break ifadesi-
20ye kadar gidecekken 15 olunca durdu
*/


#include<stdio.h>
int main ()
{
	int a=10;
	while (a<20)
	{
	printf("a degeri: %d\n",a);
	a++;
	
	  if(a>15)
	  {
	  break;		
	  }
	
	}

	return 0;
}
