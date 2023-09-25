#include<stdio.h>//fhata
void hatayibul(int hata){
	printf("hata kodu %d",hata);
}

int main(){
	int sayi;
	printf("Lutfen negatif olmayan sayi girin:");
	scanf("%d",&sayi);
	if(sayi<0)
	hatayibul(404);
	else
	printf("dogru sayi girdiniz");
	return 0;
}

