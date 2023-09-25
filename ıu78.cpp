#include<stdio.h>
int main(){
	int arr[]={1,2,3,4,3,2,1};
	int i,uzunluk,a,kontrol=0;
	uzunluk=sizeof(arr)/sizeof(int);
	a=uzunluk-1;
	for(i=0;i<uzunluk;i++){	
	  if(arr[i]!=arr[a]){
	  	kontrol=1;
	  }
	}
	if(kontrol==0)
	printf("bu dizi palindromdur");
	else 
	printf("palindrom degildir");
	return 0;
}
