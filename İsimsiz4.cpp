#include<stdio.h>
int main(){
	int arr[10];
	for(int i=0;i<10;i++){
	printf("%d. elemani girin:",i);
	scanf("%d",&arr[i]);
	}	
	printf("Dizinin tersi: ");
	for(int i=9;i>=0;i--){
		printf("%d ",arr[i]);
	}
	return 0;
}
