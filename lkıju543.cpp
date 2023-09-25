#include<stdio.h> //çs9
int main(){
	int arr[10];
	int i,a=0,b=9;
	for(i=0;i<10;i++){
		printf("sayi girin");
		scanf("%d",&arr[i]);
	}
	printf("array:");
	for(i=0;i<10;i++){
	printf("%d ",arr[i]);
	}
	for(i=0;i<10;i++){
	 if(arr[i]==arr[b]){
	 a++;
	 }
	 b--;
	 if(a==5)
	 break;	
	}
	if(a==5){
		printf("\nbu dizi palindromdur");
	}
	else
	printf("\npalindrom degil");
	return 0;
}
