#include<stdio.h>//pdf14.1
int main(){
	int satir,i,j;
	printf("satir sayisi girin:");
	scanf("%d",&satir);
	int yildiz=satir;
	
	for(i=0;i<satir;i++){
	  
	  for(j=0;j<yildiz;j++){
		printf("*");
	  }	
		printf("\n");
		yildiz--;
	}
	
	
	
	
	return 0;
}
/*
****** 6yil
*****  5yil
****
***
**
*
*/
