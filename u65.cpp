#include<stdio.h>
int asal_mi(int sayi){
	int i;
	for(i=2;i<sayi;i++){
		if(sayi%i==0)
		return 0;
	 }
	return 1;
}

int main(){
	int n;
	printf("kontrol icin sayi girin:");
	scanf("%d",&n);
	if(asal_mi(n)==0)
	printf("sayi asal degildir");
	else 
	printf("sayi asaldir");
	
	return 0;
}


