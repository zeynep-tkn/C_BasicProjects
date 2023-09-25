#include<stdio.h>
int main(){
   int cisim,uzunk,kisak,taban,h,r; 
   float alan;
   printf("1-Dikdortgen\n");
   printf("2-Ucgen\n");
   printf("3-Daire\n");
   printf("4-Kare\n");
  
   printf("alanini istediginiz cismi secin:");
   scanf("%d",&cisim);
   
   switch(cisim){
   	case 1:{
   	 printf("uzun kenar girin: ");
   	 scanf("%d",&uzunk);
   	 printf("kisa kenar girin: ");
   	 scanf("%d",&kisak);
   	 printf("alan:%d",kisak*uzunk);	
	 break;
	}
   	case 2:{
   	 printf("taban girin: ");
   	 scanf("%d",&taban);
   	 printf("h girin: ");
   	 scanf("%d",&h);
   	 printf("alan:%f ",taban*h/2);
	 break;
	} 
	case 3:{
	 printf("yaricap girin: ");
   	 scanf("%d",&r);
   	 alan=3.14*r*r;
   	 printf("alan:%.2f",alan);
    }
	 break;
	case 4:{
	 printf("kenar girin: ");
   	 scanf("%d",&uzunk);
   	 printf("alan:%d",uzunk*uzunk);
	 break;
	}	
	default:
	 printf("lutfen gecerli sayi girin...");
   }
	return 0;
}
