#include<stdio.h>
int main(){
	int arr[10];
	int i,max,min;
	
	for(i=0;i<10;i++){
		printf("eleman girin:");
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	min=arr[0];
	for(i=0;i<10;i++){
		if(arr[i]>max)
		max=arr[i];
	    
		if(arr[i]<min)
	    min=arr[i];
	}
	    printf("max=%d \nmin=%d",max,min);
	return 0;
}
