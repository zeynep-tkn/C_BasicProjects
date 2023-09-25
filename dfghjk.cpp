//hesap makinesi
#include<stdio.h>
int main()
{
    int sayi1,sayi2,islem,a; 
    printf("islem yapmak icin 8e basin: ");
    scanf("%d",&a);
      while(a==8)
    {
    	printf("\n Ilk sayiyi giriniz: ");
        scanf("%d",&sayi1);
        printf("Ikinci sayiyi giriniz: ");
        scanf("%d",&sayi2);
    
	printf("1-Toplama\n");
    printf("2-Cikarma\n");
    printf("3-Bolme\n");
    printf("4-Carpma\n");
    printf("5-Mod alma\n");
    
	printf("Bir islem numarasi giriniz: ");
    scanf("%d",&islem);
    
	switch(islem)
       {
    	case 1:
    	printf("toplamin sonucu:%d tekrar icin 8e basin",sayi1+sayi2);
        break;
        case 2:
        printf("cikarmanin sonucu:%d  tekrar icin 8e basin",sayi1-sayi2);
        break;
		case 3:
		printf("bolmenin sonucu:%d  tekrar icin 8e basin",sayi1/sayi2);
        break;
        case 4:
        printf("carpmanin sonucu:%d  tekrar icin 8e basin",sayi1*sayi2);
        break;
        case 5:
        printf("mod almanin sonucu:%d  tekrar icin 8e basin",sayi1%sayi2);
        break;
        default:
        printf("lutfen gecerli numara girin ");
       }
	}
    
    return 0;
}
