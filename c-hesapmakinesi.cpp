//hesap makinesi
#include <stdio.h>  
int main()
{
	int sayi1,sayi2,islem,a;
	a=8;
	 while(a==8) {
	 printf("\nIlk sayiyi giriniz: ");
     scanf("%d",&sayi1);
     printf("Ikinci sayiyi giriniz: ");
     scanf("%d",&sayi2);
    printf("1-Toplama\n2-Cikarma\n3-Bolme\n4-Carpma\n5-Mod alma");
    printf("\nBir islem numarasi giriniz: ");
    scanf("%d",&islem);
    switch(islem){
    	case 1:
    	printf("toplamin sonucu:%d",sayi1+sayi2);
        break;
        case 2:
        printf("cikarmanin sonucu:%d",sayi1-sayi2);
        break;
		case 3:
		printf("bolmenin sonucu:%d",sayi1/sayi2);
        break;
        case 4:
        printf("carpmanin sonucu:%d",sayi1*sayi2);
        break;
        case 5:
        printf("mod almanin sonucu:%d",sayi1%sayi2);
        break;
        default:
        printf("lutfen gecerli numara girin ");
        }
	 printf("\nTekrar islem yapmak istiyorsaniz 8e basin istemiyorsaniz 7ye basin: ");
	 scanf("%d",&a);
	   }
	   printf("Gorusmek uzere...");
    return 0;
}
