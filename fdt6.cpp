#include<stdio.h>
int deger_yaz_topla(int a,int b);
int main(void)
{
  int a=7,b=21;
  printf("toplamý:%d\n",deger_yaz_topla(a,b));
  a=35,b=50;
  printf("toplamý:%d\n",deger_yaz_topla(a,b));
  return 0;
}
int deger_yaz_topla(int a,int b)
{
  int c=0;
  for ( ;a<=b;a++) {
       printf("%d ",a);
       c=c+a;
  }
  printf("\n");
  return c;
}
