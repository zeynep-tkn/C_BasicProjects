#include<stdio.h>
int main()
{
     /*
        !  i=i+1 yapmak yerine ++i i++ �eklinde iki ifade kullanabiliriz
     ++i �nce art�rd���m�z� yazar  i++ ise �nce ilk halini yazar sonra artm���n�
        !  --i  bu ayn� �ey
     a�a��da deneyelim
     */
	int a=4;
	int b=5;
	int c=6;
	printf("%d %d %d",a++,--b,++c);
	
	
	return 0;
}

