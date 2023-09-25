#include<stdio.h>
int main()
{
	int saniye;
	int dakika,saat,modum;
	printf("lutfen saniye icin bir tam sayi girin");
	scanf("%d",&saniye);
	saat=saniye/3600;
	modum=saniye%3600;
	dakika=modum/60;
	saniye=modum%60;
	printf("saat:%d",saat);
	printf("dakika:%d",dakika);
	printf("saniye:%d",saniye);
	return 0;
}
