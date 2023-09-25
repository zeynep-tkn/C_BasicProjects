#include<stdio.h>
int main(){
	char harf,num;
	printf("harf girin:");
	scanf("%c",&harf);
	
	num='a','e','o','u','ı';
	
	if(harf==num){
		printf("sesli harftir");
	}
	else if(harf!=num)
	    printf("sesli harf degildir");
	return 0;
}
