#include<stdio.h>
int main(){
  int sayi,tersi;
  printf("sayi girin: ");
  scanf("%d",&sayi);
  printf("tersi:");
  while(sayi>0){
  	tersi=sayi%10;
  	sayi=sayi/10;
  	printf("%d",tersi);
  }
  	
}
