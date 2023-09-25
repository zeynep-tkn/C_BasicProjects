#include<stdio.h>
int main(){
	int islem,sayi1,sayi2;
	printf("ilk sayiyi girin: ");
	scanf("%d",&sayi1);
	printf("ikinci sayiyi girin: ");
	scanf("%d",&sayi2);
	
	printf("1-toplama\n");
	printf("2-ckarma\n");
	
	printf("Yapmak istediginiz islem no girin:");
	scanf("%d",&islem);
	switch(islem)
	{
	case 1:
		printf("sonuc=%d",sayi1+sayi2);
		break;
	case 2:
		printf("sonuc=%d",sayi1-sayi2);
		break;
	case 3:
	 printf("dogru numara tuslayin");
	    break;
	
	default:
	printf("dogru no girin:");
	}
	return 0;
}
