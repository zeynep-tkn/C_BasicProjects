#include<stdio.h>
int main()
{
int a,b,c;
printf("ucgene ait uc kenar uzunlugu girin:");
scanf("%d%d%d",&a,&b,&c);

if (a==b && b==c)
{
	printf("eskenar");
}
else if( (a==b)||(b==c)||(a==c))
{
	printf("ikizkenar");
}
else
{
	printf("cesitkenar");
}
return 0;
}

