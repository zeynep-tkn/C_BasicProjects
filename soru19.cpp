#include<stdio.h>
int main()
{
int sayi1,sayi2,islem;
printf("1-Toplama\n");
printf("2-Cikarma\n");
printf("3-Bolme\n");
printf("4-Carpma\n");
printf("5-Mod alma\n");

printf("Yapmak istediginiz islemin numarasini tuslayiniz: ");
scanf("%d",&islem);

printf("\nIlk sayiyi giriniz:");
scanf("%d",&sayi1);
printf("\nIkinci sayiyi giriniz:");
scanf("%d",&sayi2);
switch(islem)
{
case 1:
	printf("sonuc:%d",sayi1+sayi2);
	break;
case 2:
	printf("sonuc:%d",sayi1-sayi2);
	break;
case 3:
	printf("sonuc:%d",sayi1/sayi2);
	break;
case 4:
	printf("sonuc:%d",sayi1*sayi2);
	break;
case 5:
	printf("sonuc:%d",sayi1%sayi2);	
	break;
}
return 0;
}

