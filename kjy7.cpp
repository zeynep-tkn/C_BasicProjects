#include<stdio.h>
int main(){
	float a,sayi,i;
	printf("Bir sayi girin:");
	scanf("%f",&sayi);
	a=sayi/5;
	printf("sonucccc:%.2f\n",a);
	for(i=0;i<5;i++){
		printf("*");
		continue;
		a=a*a*a;
	}
	printf("%.2f",a);
	return 0;
}
