#include<stdio.h>//fonk kare-küp hesaplama
   int sonuc = 0;
   int kare_hesapla(int sayi){ 
   sonuc = sayi * sayi; 
   }
   int kup_hesapla(int sayi){   
   sonuc = sayi * sayi * sayi; 
   }
   
   int main( ){
   int a;
   printf( "Sayi giriniz:");
   scanf( "%d",&a);
   printf("Sayinin karesi: %d\n",kare_hesapla( a ));
   printf("Sayinin kupu:%d\n", kup_hesapla( a ));
   
   return 0; 
}
