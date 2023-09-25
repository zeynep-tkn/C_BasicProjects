#include<stdio.h>  //çs6
int main()
{
	int i,max,min;
	int dizi[5];
	for(i=0;i<5;i++){
		printf("Bir sayi girin:");
		scanf("%d",&dizi[i]);
	}    
	max=dizi[0];
	min=dizi[0];
	for(i=0;i<5;i++){
		if (dizi[i]>max){
	   max=dizi[i];
		}
		if(dizi[i]<min)
		min=dizi[i];
	}
		printf("max:%d  min:%d",max,min);
	
	return 0;
}
