#include <stdio.h>  //soru25
int main()
{
	int a,i,fakt=1,sonr,k,toplam=0;
	printf("Bir tam sayi girin: ");
	scanf("%d",&a);
	
	printf("%d = ",a);
	for(k=a;a>0;a=a/10)
	{
		sonr=a% 10;
		printf("%d! + ",sonr);
		for(i=1;i<=sonr;i++)
	    {
	      fakt=fakt*i;
	    }
	    toplam=toplam+fakt;
	}
	
	if(toplam==a)
	{
       printf("\nguclu sayidir");
	}
	else
	{
	   printf("\nguclu sayi degildir");
	}
    
	return 0;
}
