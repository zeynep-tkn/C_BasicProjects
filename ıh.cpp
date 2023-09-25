#include<stdio.h>
int main(){
   int yildiz=1,sayi=65,satir,num=65;
    printf("Lutfen bir satir girin:");
	scanf("%d",&satir);
	
	for(int i=0;i<satir;i++){
		num=65;
		for(i=0;i<yildiz;i++){
		printf("*");
	    	for(int j=64;j<num;j++){
	    	printf("%c",sayi);
		   }

		}
		yildiz++;
		sayi++;
		printf("\n");
	}
	return 0;
}

/*

j=0;j< ;j++
printf("%c",sayi);

*1A  1YÝL 1 A
**2B
***3C
****4D
*****5E

*/
