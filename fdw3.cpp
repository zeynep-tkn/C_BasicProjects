#include<stdio.h>
int main(){
   float maal,sfiyat,kar,zarar;
   printf("urunun maaliyetini girin: ");
   scanf("%d",&maal);
   printf("urunun satis fiyatini girin: ");
   scanf("%d",&sfiyat);
   kar=(sfiyat-maal)/maal*100;
   zarar=(maal-sfiyat)/maal*100;
   if(sfiyat>maal){
   printf("%.2f kar",kar);
   }
   if(sfiyat<maal){
   	printf("%.2f zarar",zarar);
   }	
   else if(sfiyat==maal)
   printf("kar zarar yok");
	return 0;
}
