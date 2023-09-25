#include<stdio.h>
int main()
{
int i=-3, j=2, k=0, m;
m = ++i && ++j;
printf("%d, %d, %d, %d\n", i, j, k, m);
return 0;
}
//&& ++j || ++k
