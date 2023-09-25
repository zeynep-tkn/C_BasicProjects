#include <stdio.h> //tek sayilarin adedini yaz 
int main(){
int i;
int arr[10];
for(i=0;i<10;i++)
{
printf("bir sayi gir:");
scanf("%d",&arr[i]);
}
for(i=0;i<10;i++)
{
if(arr[i]% 2!=0)
printf(" %d ",arr[i]);
}
return 0;
}
