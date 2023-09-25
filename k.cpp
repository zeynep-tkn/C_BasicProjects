#include<stdio.h>
int main(){
	int fact=1,i,n;
	printf("Lutfen bir n sayisi girin:");
	scanf("%d",&n);
	
	for(i=n;i>0;i--){
		fact=fact*i;
	}
	printf("%dsayisinin faktoriyeli=%d",n,fact);
	
	return 0;
}
