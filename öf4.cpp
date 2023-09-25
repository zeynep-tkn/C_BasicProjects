#include<stdio.h>//pdf13.1
int main(){
	int n,i,sayi,cift=0,tek=0,sum=0,tun=0;
	int sayilar[10];
	printf("Adet sayisi girin:");
	scanf("%d",&n);
	  for(i=0;i<n;i++){
	  printf("Bir sayi girin:");
	  scanf("%d",&sayilar[i]);	
	  } 
	for(i=0;i<n;i++){
		if(sayilar[i]% 2==0){
		sum=sum+sayilar[i];
		cift++;	
		}
		else{
		tun=tun+sayilar[i];
		tek++;	
		}
	}
	printf("tek sayilarin miktari:%d\n",tek);
	printf("cift sayilarin miktari:%d\n",cift);
	printf("tek sayilarin toplami:%d\n",tun);
	printf("cift sayilarin toplami:%d\n",sum);
	return 0;
}


