#include<stdio.h>  //�s3
int main()
{
	int i;
	int arr[6]={1,-2,-3,4,5,-8};
	for(i=0;i<6;i++){
		if(arr[i]<0)
		{
		printf("%d\n",arr[i]);
		}
	}
	return 0;
}
