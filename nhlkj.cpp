//ic ice dongu ornegi* ucgen ornegi
#include<stdio.h>
int main ()
{
	int i,j,a;
	i=1;
	while(i<=5)
  {
	j=1;
	while(j<=i)
	{
		printf("*",j);
		j++;
		a=5;
		while(a>1)
		{
		printf(" ");
		a=a-1;		
		}
	}
   printf("\n");
   i++;
  }	
	return 0;
}
