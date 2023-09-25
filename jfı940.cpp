#include <stdio.h> //arrayin ort yazan
#include <stdlib.h>
int main() 
{
   int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   int i, top = 0,ort;
   for(i=0 ; i<10 ; i++)
	 {
     top = top + arr[i];
     }
     ort=top/10;
   printf("ort: %d", ort);
	return 0;
}
