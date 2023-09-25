#include<stdio.h>
int main(){
  int b=65,bosluk,satir,yildiz=1;
  bosluk=satir-1;
  printf("satir girin: ");
  scanf("%d",&satir);
  for(int j=0;j<satir;j++){
  	
	  for(int i=0;i<bosluk;i++){
      printf(" ");
	  }
  	
	  for(int a=0;a<yildiz;a++){
  		printf("*");
	  }
      for(int c=0;c<1;c++){
	  printf("%c",b);
	  }
	  bosluk--;	
	  yildiz++;
	  b++;
	  printf("\n");
	  }
return 0;	
}
/*
   *A   3bos 1yil
  **B   2bos 2yil
 ***C   1bos 3yil
****D   0bos 4yil
*/
