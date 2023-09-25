#include<stdio.h>// çs10
int main(){
	int arr[]={5,6,7,8};
	int i,a=0,b=0,c=0;
	int arr2[]={5,6,7,8};
	printf("Dizi1:");
	
	for(i=0;i<4;i++){
	printf("%d ",arr[i]);
	a++;
	}
	printf("\nDizi2:");
	for(i=0;i<4;i++){
	printf("%d ",arr2[i]);
	b++;
	}

	for(i=0;i<4;i++){
	  if(arr[i]==arr2[i])
	  c++;
	}
	  if((a!=b)||(c!=4))
	  	printf("\nBu iki dizi birebir ayni degildir");

      if(c==4 && a==b)	
	  printf("\nbirebir aynidir");
	return 0;
}
