#include<stdio.h> //hangileri ortak eleman
int main(){
    int i;
    int arr[5];
    for(i=0;i<5;i++){
    	printf("bir tam sayi girin:");
    	scanf("%d",&arr[i]);
	}
	printf("arraylerrr:");
	for(i=0;i<5;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	printf("Tersi:");
	for(i=5;i>=0;i--)
	printf("%d ",arr[i]);
	return 0;
}

