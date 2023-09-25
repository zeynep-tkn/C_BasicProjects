#include<stdio.h> //çs8
int main(){
	int arr[10];
	int i,sayi,a=0;
	for(i=0;i<10;i++){
		printf("sayi girin");
		scanf("%d",&arr[i]);
	}
	printf("tam sayi girin:");
	scanf("%d",&sayi);
	printf("array:");
	for(i=0;i<10;i++){
	printf("%d ",arr[i]);
	}
	for(i=0;i<10;i++){
	if(arr[i]==sayi)
	a++;	
	}
	printf("\n%d kere geciyor",a);
	return 0;
}
