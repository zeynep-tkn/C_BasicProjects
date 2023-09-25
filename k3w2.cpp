#include<stdio.h>
#include<stdlib.h>

int main(){
	int sayac=0;
    char str[100];
    printf("metin girin: ");
    gets(str);
    while(str[sayac]!='\0'){
    	sayac++;
	}
 printf("\n%d karakterlidir",sayac);
return 0;	
}

