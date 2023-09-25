#include<stdio.h>   //desen soru22
int main()
{
	int satir,i,j;
	printf("satir sayisi girin: ");
    scanf("%d",&satir);
	
	for(j=-satir;j<=satir;j++)
	{
	  for(i=1;i<=satir;i++)
	  {
	   printf("%d",satir);
	  }
	  satir=satir-1;
      printf("\n");
	}
	return 0;
}
