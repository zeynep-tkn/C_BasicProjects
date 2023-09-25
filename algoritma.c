#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int x = 1;
	int sayi = 0;
	int toplam = 0;
	
	printf("lutfen pozitif bir n tam sayisi giriniz...\n");
    scanf("%d",&sayi);
    
    int kullanicidanAlinanSayi= sayi;
    
    while (sayi > 0){
    	
    printf("%d\n",x);
	toplam = toplam + x;       // toplam += x
	x++;
	sayi--;	
  	}
	
	printf("1'den %d ye kadar olan sayilarin toplami: %d' dir.\n.",kullanicidanAlinanSayi,toplam);
	
	return 0;
}
