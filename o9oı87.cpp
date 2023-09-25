#include<stdio.h>  // çs7
int main(){
	int i,sayi;
	int arr[5]={1,2,3,4,5};
	printf("Dizide varligini sorgulayacaginiz sayiyi girin: ");
	scanf("%d",&sayi);
	for(i=0;i<5;i++){
		if(sayi==arr[i]){
		printf("indisi:%d",i);
		}
	}
	else{
	printf("Sayi bu dizide yoktur");
	}
	return 0;
}
