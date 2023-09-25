#include<stdio.h>
int main(){
int sayi,fakt;
int i;
char a='F';
	while(i<100){
	fakt=1;
	 if(a=='F'){
	   printf("sayi girin:");
	   scanf("%d",&sayi);
    	for(i=1;i<=sayi;i++){
	    fakt=fakt*i;
	    }
	 printf("fakt=%d",fakt);	
	}
	printf("\ntekrar icin F'e cikmak icin Q'a basin: ");
	scanf("%s",&a);	
	if(a=='Q')
	break;	
	}	
	return 0;
}
