//soru17

#include<stdio.h>
int main()
{
    int x,y,ortakkat,i;
	printf("Bir tam  sayi girin: ");
	scanf("%d",&x);
	printf("Bir tam  sayi daha girin: ");
	scanf("%d",&y);

    for(i=1;(i<=x && i<=y);i++)
    {
    
	if (i%x==0 && i%y==0)
	{
	ortakkat=i;
	}
    }
    printf("\n ekoku: %d",ortakkat);

	return 0;
}
