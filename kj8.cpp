#include<stdio.h>//fonk tek mi çift mi
   int tek_mi_cift_mi( int sayi ){
   if(sayi% 2==0)
   printf("%d, cift bir sayidir.\n",sayi);
   else
   printf( "%d, tek bir sayýdir.\n",sayi);
   }
   
   int main(){
   int girilen_sayi;
   printf( "Lütfen bir sayi giriniz> " );
   scanf( "%d",&girilen_sayi );
   tek_mi_cift_mi( girilen_sayi );
   return 0; 
   }
   
