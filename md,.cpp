#include<stdio.h>
int main()
{
     /*
        !  i=i+1 yapmak yerine ++i i++ þeklinde iki ifade kullanabiliriz
     ++i önce artýrdýðýmýzý yazar  i++ ise önce ilk halini yazar sonra artmýþýný
        !  --i  bu ayný þey
     aþaðýda deneyelim
     */
	int a=4;
	int b=5;
	int c=6;
	printf("%d %d %d",a++,--b,++c);
	
	
	return 0;
}

