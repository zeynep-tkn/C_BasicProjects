#include<stdio.h>  //çs2
int main()
{
	int arr[10];
	int i;
	for(i=0;i<10;i++){
	printf("Tam sayi girin: ");
	scanf("%d",&arr[i]);
	}
	printf("Dizinin tersi: ");
	for(i=9;i>=0;i--){
	printf("%d ",arr[i]);
	}
	return 0;
}
