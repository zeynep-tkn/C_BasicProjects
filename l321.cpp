#include<stdio.h>  //a5
int main(){
	float ort,sum=0;
	float arr[]={4.5,3.5,4,9,10};
	for(int i=0;i<5;i++){
		sum=sum+arr[i];
	}
	ort=sum/5;
	printf("ort:%.2f",ort);
	
	
	return 0;
}
