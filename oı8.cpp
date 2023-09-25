#include<stdio.h> //çs11
int main(){
	int arr[]={1,2,3,4};
	int i,a=0,b=1;
	printf("array:");
	for(i=0;i<4;i++){
	printf("%d ",arr[i]);
	}
	printf("\nson array:");
	for(i=0;i<4;i++){
	   if(i==0){
	   printf("%d ",arr[0]*arr[b]);	
	   }
	 b++;
	    if(b==4){
	    b=3;
	 	printf("%d ",arr[a]*arr[b]);
	 	break;
	    }	
	 printf("%d ",arr[a]*arr[b]);
	 a++;
	}
	return 0;
}
/*
0  0*1
1  0*2
2  1*3
3  2*3
*/
//2,3,8,12
