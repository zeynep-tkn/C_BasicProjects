//ic ice dongu ornegi* ucgen ornegi
#include<stdio.h>
int main ()
{
	int i,j;
	i=1;
	while(i<=5)
  {
	j=1;
	
	while(j<=i)
	{
		printf("*",j);
		j++;
	}
   printf("\n");
   i++;
  }	
	return 0;
}
