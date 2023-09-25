#include <stdio.h>    //istediği sayilari tersten tutan array
#include <stdlib.h>
int main()
{
 int i;
int arr[10];
for(i=0;i<10;i++)
{
printf("sayi gir :");
scanf("%d",&arr[i]);
}
for(i=9;i>=0;i--)
printf("%d ",arr[i]);

return 0;
}
