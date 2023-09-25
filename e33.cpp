#include<stdio.h>
int main(){
    char dizi[100]="Karakter bakalim var mi";
    int i=0,kontrol=0;
    char karakter;
    printf("karakter girin:");
    scanf("%c",&karakter);
    
    while(dizi[i]!='\0'){
    	if(karakter==dizi[i]){
    	printf("cumlede var");
    	kontrol=1;
    	break;
		}
    	i++;
		}
	return 0;
}
