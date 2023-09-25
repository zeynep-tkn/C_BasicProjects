#include <stdio.h> //arrayin toplamýný yazan
#include <stdlib.h>
int main() 
{
   int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   int i, top = 0;
   for(i=0 ; i<10 ; i++)
	 {
     top = top + arr[i];
     }
   printf("Toplam: %d", top);
	return 0;
}
