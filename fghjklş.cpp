#include<stdio.h>   //yildiz basma
int main()
{
	int s,i,yildiz=1,satir;
    printf("satir sayisi girin: ");
    scanf("%d",&satir);
    for(i=1;i<=satir;i++)
    {
    for(s=0;s<yildiz;s++)
	 {
	 printf("*");
	 }
	 printf("\n");
	 yildiz++;
	}
	
	
	return 0;
}
