//carpim tablosunun süslü hali
#include<stdio.h>
int main ()
 {
	int i,j;
	for(i=1;i<=9;i++)
	{
		printf("      ");
		printf("%d\t",i);
	}
		printf("\n");
	 	printf("---------------------------------------------------------------------\n");
	for(i=1;i<=9;i++)
	{
		printf("%d|",i);
		printf("     ");
	for(j=1;j<=9;j++)
     printf("%d\t",i*j);
	 printf("\n");	
    }
	return 0;
}
