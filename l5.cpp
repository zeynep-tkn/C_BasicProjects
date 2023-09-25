#include<stdio.h>//pdf13.2
int main(){
	int sayi,fact=1;
	printf("faktoriyelini istediginiz sayiyi girin:");
	scanf("%d",&sayi);
	
	for(int i=sayi;i>0;i--){
	  fact=fact*i;
	}
	printf("%d sayisinin fakt=%d",sayi,fact);
	
	return 0;
}
