//soru16

#include<stdio.h>
int main()
{
	int a,b,bolen,i;
	printf("Bir tam  sayi girin: ");
	scanf("%d",&a);
	printf("Bir tam  sayi daha girin: ");
	scanf("%d",&b);

	for(i=1;i<=a && i<=b;i++)
   {
		if(a%i==0 && b%i==0)
		bolen=i;
   }
   printf("%d ve %d 'nin EBOBU : %d",a,b,bolen);
  
	return 0;
}
