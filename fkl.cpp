//soru13
#include <stdio.h>
int main()
{
    int sayi,tersi;
     
    printf("Bir sayi giriniz: ");
    scanf("%d",&sayi);
     
    printf("Sayiyi tersden yazilmis hali: ");
    while(sayi > 0){
         
        tersi = sayi % 10;
        printf("%d",tersi);
        sayi = sayi / 10;
    }
    return 0;
}
