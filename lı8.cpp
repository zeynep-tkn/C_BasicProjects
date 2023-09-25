#include<stdio.h>//fcarp
int carp(int a,int b){
	return (a*b);
}

int main(){
    int a,b;
    printf("sayi girin:");
    scanf("%d",&a);
    printf("sayi girin:");
    scanf("%d",&b);
    printf("%d",carp(a,b));
	return 0;
}
