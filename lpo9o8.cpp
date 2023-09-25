#include<stdio.h>  //çs5
int main()
{
	int i;
	int arr[5]={2,5,7,9,6};
	printf("Tek sayilar:");
	for(i=0;i<5;i++){
		if(arr[i]% 2==1)
		printf("%d ",arr[i]);
	}
	
	return 0;
}
