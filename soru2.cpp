#include<stdio.h>
int main()
{
int sayi,mod;
printf("lutfen bir tam sayi girin:");
scanf("%d",&sayi);
mod=sayi%2;
 if (mod==0)
{
	printf("sayi cifttir");
}
else
{
	printf("sayi tektir");
}
return 0;
}


