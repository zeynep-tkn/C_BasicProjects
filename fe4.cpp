#include<stdio.h>//pdf14.2
int main(){
    int sayi,i,a=0;
    printf("sayi girin:");
    scanf("%d",&sayi);
    for(i=2;i<sayi;i++){
    	if(sayi%i==0){
    		a++;
		}
	}
	if(a>0)
	printf("sayi asal degildir");
	
	if(a==0)
	printf("sayi asaldir");
	return 0;
}
