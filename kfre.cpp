#include<stdio.h> //ekok bulma
int main(){
	int n,sum=0,avrg;
	printf("bir sayi girin:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		printf("%d\n",i);
		sum=sum+i;
	}
	avrg=sum/n;
	printf("sum=%d",sum);
	printf("\navrg=%d",avrg);
	
	return 0;
}
