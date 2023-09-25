#include<stdio.h>//fonk kare al
int kare_al(int a);
int main(void){
	int a;
	for(a=5;a<=20;a++){
	printf("%dnin karesi:%d\n",a,kare_al(a));
	}
}
int kare_al(int a){
return a*a;
}

