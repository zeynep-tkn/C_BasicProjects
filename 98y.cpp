#include<stdio.h>  //a7max min
int main(){
   int i,max,min; 
   int arr[5];
   for(i=0;i<5;i++){
   	printf("Sayi girin: ");
   	scanf("%d",&arr[i]);
   }
   max=arr[0];
   min=arr[0];
   for(i=0;i<5;i++){
   	if(arr[i]>max){
   		max=arr[i];
	   }
   }
   printf("max:%d\n",max);
   for(i=0;i<5;i++){
   	if(arr[i]<min){
   		min=arr[i];
	   }
   }
   printf("min:%d",min);
	return 0;
}
