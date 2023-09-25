#include<stdio.h>
int main()
{
   int bosluk,yildiz=1,satir,s,a;
   printf("satir saiyisi girin: ");
   scanf("%d",&satir);
   bosluk=satir-1;
   for(a=0;a<satir;a++)
   {
   	 for(s=0;s<bosluk;s++)
   {
   	printf("");
   }
    
	for(s=0;s<yildiz ;s++)
   {
   	printf("*");
   }
   yildiz++;
   printf("\n");
   bosluk--;
   }
	return 0;
}
/*
CIKTI
     * 5 bosluk 1yil
    ** 4 bosluk 2yil
   *** 3 bosluk 3yil
  **** 2 bosluk 4yil
 ***** 1 bosluk 5yil
****** 0 bosluk 6yil
*/
