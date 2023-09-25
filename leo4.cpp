#include <stdio.h> //don21
int main()
{
    int i,n
	int t1=0,t2=1;
	int nextT;
    printf("Terim sayisini girin:");
    scanf("%d", &n);
    
    printf("Fibonacci:");
    for (i=0;i<n;i++)
	{
        printf("%d,",t1);
        nextT= t1+t2;
        t1 = t2;
        t2 = nextT;
    }
    
    return 0;
}
/*
CIKTI

Terim sayýsýný girin:8

Fibonacci Dizisi: 0,1,1,2,3,5,8,13,
*/
