#include <stdio.h>
 
void topla()
{
    int sayi1;
    int sayi2;
    printf("1.Sayiyi giriniz: ");
    scanf("%d",&sayi1);
    printf("2.Sayiyi giriniz: ");
    scanf("%d",&sayi2);
    printf("Sayilarin toplami %d dir",sayi1 + sayi2);
}
main()
{
    topla();
}
