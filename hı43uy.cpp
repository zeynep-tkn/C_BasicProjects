#include<stdio.h> //cümledeki karakter sayýsý veren
int main()
{
	char str[100];
	int len=0,i;
	printf("Bir cumle giriniz: ");
	gets(str);
	printf("Bunu girdiniz: %s\n",str);
	
	for(i=0;str[i]!='\0';i++)
	{
		len=len+1;
	}
	printf("Dizinin boyutu:%d\n ",len);
	puts(str);
	return 0;
}
