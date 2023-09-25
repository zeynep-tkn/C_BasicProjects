#include<stdio.h> //aranan þey dizide varsa
int main()        // nerde?yoksa yok yaz
{
	int sayi,i;
	int dizi[]={1,2,3,4,5,6};
	int buldunmu=0;
	printf("bir tam sayi girin: ");
	scanf("%d",&sayi);
	
	for(i=0;i<7;i++)
	{
	   if(sayi==dizi[i])
	   {
		printf("indisi:%d\n",i);
		buldunmu=1;
	   }
	}
     if(buldunmu==0)
     printf("Sayi dizide yoktur");
	return 0;

}
