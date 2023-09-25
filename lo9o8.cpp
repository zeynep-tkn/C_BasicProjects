#include<stdio.h>//quiz sorusu 
int main(){
  int yildiz=1,satir,bosluk;
  printf("Lutfen satir sayisi girin: ");
  scanf("%d",&satir);
  bosluk=satir-1;
  char c=65;
  for(int b=0;b<satir;b++){
  	for(int i=0;i<bosluk;i++){
  		printf(" ");
	  }
  	for(int a=0;a<yildiz;a++){
  		printf("*");
	  }
    printf("%c",c);
  	printf("\n");
	bosluk--;
	c++;
  	yildiz++;
  }
	return 0;
}
/*
   *A 3bos1yilA
  **B 2bos2yilB
 ***C 1bos3yilC
****D 0bos4yilD
*/









