#include<stdio.h>   //desen soru9
int main()      //satir=5
{
  int satir,i,yildiz,j;
  printf("satir sayisi girin: ");
  scanf("%d",&satir); 
   for(j=1;j<=satir;j++)
   {
    for(i=0;i<satir;i++)
    {
    yildiz=2*i+1;
    printf("*");
    printf("\n");
    }
   }
   return 0;
}
