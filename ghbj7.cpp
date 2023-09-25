#include<stdio.h> //alýþtýrma5
int main()
{
	int satir,bosluk,yildiz=1,i,a,b;
	printf("Satir: ");
	scanf("%d",&satir);
	bosluk=satir-1;
	for(a=0;a<satir;a++)
	{
	  for(b=0;b<bosluk;b++)
	    {
	  	printf(" ");
	    }
	  for(i=0;i<yildiz;i++)
	    {
	    printf("*");	
	    }
	printf("\n");
	yildiz=yildiz+2;
	bosluk--;		
	}
	return 0;
}
/*
      *       6bos 1yil
     ***      5bos 3yil
    *****     4bos 
   *******    3bos
  *********   2bos
 ***********  1bos 11yil
************* 0bos 13yil
*/
