#include<stdio.h>
int main()
{
	int ilkhiz,sonhiz,t;
	int a;
	printf("ilk hiz,son hiz ve sureyi giriniz");
	scanf("%d",&ilkhiz);
	scanf("%d",&sonhiz);
	scanf("%d",&t);
	a=(sonhiz-ilkhiz)/t;
	printf("ivme:%d",a);
	
	return 0;
}
