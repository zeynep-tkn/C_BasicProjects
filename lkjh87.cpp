#include<stdio.h> //istenen karakter cümlede geciyormu
int main()
{
	int i,sayac=0;
    char str[100]= {'naabaysin biremsess'};
    char kar;
    int uzunluk;
    uzunluk=sizeof(str)/sizeof(char);
    
	printf("Bir karakter girin: ");
	scanf("%d",&kar);
	
	for(i=0;i<uzunluk;i++)
	{
	if(str[i]==kar)
	sayac++;
	}
	else 
	printf("Karakter dizide yok");	
	return 0;

}
