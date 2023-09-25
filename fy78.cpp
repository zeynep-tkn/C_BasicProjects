#include <stdio.h>//max ve min eleman yaz
int main()
{
int i,max,min;
int arr[10];
for(i=0;i<10;i++)
{
printf("bir sayi gir:");
scanf("%d",&arr[i]);
}
max=arr[0];
min=arr[0];
for(i=0;i<10;i++)
{
	if(arr[i]>max)
	{

		max=arr[i];
	}
if(arr[i]<min)
{
	min=arr[i];
}
}
printf("max : %d , min = %d",max,min);
return 0;}
