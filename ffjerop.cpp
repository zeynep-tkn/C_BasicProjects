#include<stdio.h> //aranan karakter geciyor mu kac kez?
int main(){
	char str[]="Kod yazmak güzeldir";
	int i,a=0,uzunluk;
	char ch;
	uzunluk=sizeof(str)/sizeof(char);
	
	printf("bir karakter giriniz:");
	scanf("%c",&ch);
	
	for(i=0;i<uzunluk;i++){
		if(str[i]==ch)
		a++;
	}
	if (a>0)
	printf("%d kez geciyor",a);
	else
	printf("Aranan karakter dizide yoktur");
	
	return 0;
}
