#include <stdio.h>
int main() 
{
 int satir,a;
 printf("Satir sayisi yazin: ");
 scanf("%d",&satir);
 
 char c;
for(a=0;a<satir;a++)
{
  for (c='A'; c<='Z';++c)
  {
  printf("%c ", c);	
  }		
  printf("\n");
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
