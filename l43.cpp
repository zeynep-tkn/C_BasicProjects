#include<stdio.h>//ffact
   int faktoriyel(int sayi){
   int fact=1;
   for(;sayi>0;sayi--)
     fact=fact*sayi;	
   	return fact;
   }



int main(){
	int n;
	printf("sayi girin: ");
	scanf("%d",&n);
	printf("sonuc:%d",faktoriyel(n));
	
	return 0;
}
