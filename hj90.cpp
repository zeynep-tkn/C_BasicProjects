#include <stdio.h> //negatif sayi yazdiran
int main()
{
  int dizi[5] = {-1, 2, -3, 4, -5};
  int i;
  for (i = 0; i < 5; i++)
  {
    if (dizi[i] < 0)
    {

      printf("%d\n", dizi[i]);
    }
  }
  return 0;
}
