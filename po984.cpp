#include<stdio.h> //
int main(){
	int arr[]={1,2,3,4};
	int i,b=3,max;
	printf("array:");
	for(i=0;i<4;i++){
	printf("%d ",arr[i]);
	}
	for(i=0;i<4;i++){
    	if(arr[b]>=arr[i])
	    max=arr[b];
	    b--;
	    if(-1<b)
	    break;
	}
    printf("max:%d",max);
	return 0;
}

