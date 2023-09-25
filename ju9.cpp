#include<stdio.h>
void main fonksiyon (int *a, int *b) {

  int gecici;

  gecici = *a;

  *a = *b;

  *b = gecici;
 }



