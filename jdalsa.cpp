#include<stdio.h>
int main ()
{
	int a=10;
	do
	{
	if(a==15)
	  {
	  a++;
	  continue;	
      }
    printf("\ndeger: %d",a);
	a++;
	}
    while(a<20);       // do while i�in ; kulland�k

	return 0;
}
