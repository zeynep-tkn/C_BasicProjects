#include<stdio.h>  //soru25
int main()
{
	int sayi,a,i,toplam;
	printf("Bir tam sayi girin: ");
	scanf("%d",&sayi);
	i,toplam=1;
	while(sayi>0)
	{
		a=sayi% 10;
	    sayi=sayi/10;
	    printf(" %d",a);
	    
		while(a>=i)
	    {
		  toplam=toplam*i;	
	      i=i+1;
	    }
        printf("\n%d",toplam);		
	}
	printf("\n%d",toplam+toplam);
	return 0;
}

