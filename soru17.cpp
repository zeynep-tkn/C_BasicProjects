//soru17

#include<stdio.h>
int main()
{
    int a,b,kalan,i;
	printf("Bir tam  sayi girin: ");
	scanf("%d",&a);
	printf("Bir tam  sayi daha girin: ");
	scanf("%d",&b);

	 for(int i = (a * b); i > 0; i--)
    {
        if(i % a == 0 && i % b == 0)
		{ 
            kalan = i;
        }
    }
    printf("\nEKOK = %d",kalan);
    
	return 0;
}
