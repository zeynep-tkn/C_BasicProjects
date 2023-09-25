#include<stdio.h> //dizide ikincimaxi bul
int main(){
	int n=11,i,max,ikincimax;
	int dizi[]={1,2,3,4,1,0,1,5,1,2,1};
	max=dizi[0];
	 for(i=0;i<n;i++){
	    if(dizi[i]>max)
	    max=dizi[i];		
	 }
	ikincimax=dizi[0];
	 for(i=0;i<n;i++){
		if(dizi[i]>ikincimax && dizi[i]!=max)
		ikincimax=dizi[i];
   	 }
	  printf("ikinci en buyuk:%d\n",ikincimax);
	
	return 0;
}
