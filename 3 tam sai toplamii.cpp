#include<stdio.h>
int main()
{
  int a,b,c;
  int toplam,ort;
  printf("uc tam sayi girin");
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  toplam=a+b+c;
  ort=toplam/3;
  printf("toplam:%d",toplam);
  printf("ort:%d",ort);
  return 0;
}
