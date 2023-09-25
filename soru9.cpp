#include<stdio.h>
int main()
{
int c;
printf("Bir sicaklik degeri girin");
scanf("%d",&c);

if (c<0)
     {
	printf("Dondurucu");
}
if ((0<=c) && (c<10))
   {
   	 printf("Cok soguk");
	} 
if ((10<=c) && (c<20))
   {
   	printf("Soguk");
	} 
if((20<=c) && (c<30))
    {
    	printf("Normal");
	}
if ((30<=c) && (c<40))
    {
    	printf("Sicak");
	}
if(c>=40)
   {
   	printf("Cok sicak");
	} 
return 0;
}
