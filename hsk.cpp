//ic ice dongu ornegi ekstra 
#include<stdio.h>
int main ()
{
	int i,j,sayi;
	printf("Bir sayi girin: ");
	scanf("%d",&sayi);
	i=1;
	while(i<=sayi)
  {
	j=1;
	
	while(j<=i)
	{
		printf("%d",j);
		j++;
	}
   printf("\n");
   i++;
  }	
	return 0;
}
