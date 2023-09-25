#include<stdio.h>  //
int main()
{
	int i,yildiz=1,satir=4,j,a,c;
    int bosluk=3;
    for(j=0;j<satir;j++)
    {
	  for(a=0;a<bosluk;a++)
	  {
	  printf(" ");	
      }
      for(a=0;a<1;a++)
	  {
	  	printf("!");
	  }
	  for(i=0;i<yildiz;i++)
      {
      	printf("*");
	  }
	  for(c=0;c<1;c++)
	  {
	  printf("!");
	  }
	  yildiz=yildiz+2;
      printf("\n");
      bosluk--;
	}
   return 0;
}
/*
   !    3bos 1unlem
  !*!   2bos 1unlem 1yil 1unlem
 !***!  1bos 1unlem 3yil 1unlem
!*****!      1unlem 5yil 1unlem
*/
