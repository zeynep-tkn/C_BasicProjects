#include<stdio.h>  //soru40
int main()
{
int i,satir,a,b;
printf("Satir sayisini girin: ");
scanf("%d",&satir);
b=66;
   for(a=0;a<satir;a++)
 {
  for(i=65;i<b;i++)
   {
   printf("%c",i); 
   }	
   printf("\n");
   b++;
 } 
return 0; 
}
/*
CIKTI
A
A B
A B C
A B C D
A B C D E 
*/
