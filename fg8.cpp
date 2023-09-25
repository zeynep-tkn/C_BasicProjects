#include <stdio.h>    //istediði sayilari tutan array
#include <stdlib.h>
int main()
{
  int kullanici[10];
  int i;
  for(i=0;i<10;i++)
  {
    printf("Lutfen %d. sayiyi giriniz:",i);
    scanf("%d",&kullanici[i]);
    printf("%d ",kullanici[i]);
  }
  for(i=0;i<10;i++)
  {
    printf("%d ",kullanici[i]);
  }
return 0;
}

