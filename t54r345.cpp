#include<stdio.h>
int main(){
	int i;
	int arr[10];
	for(i=0;i<10;i++){
		printf("Sayi girin:");
		scanf("%d",&arr[i]);
	}
	printf("Dizi:");
	for(i=0;i<10;i++)
	printf("%d ",arr[i]);
	
	
	return 0;
}
