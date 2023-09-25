#include <stdio.h>
int main()
 faktöriyel ( int n ) 
{ 
    int ben , gerçek =  1 ; 
    için  ( ben =  1 ; ben <= n ; ben ++ ) 
    { 
        gerçek = gerçek * ben ; 
    } 
    dönüş gerçeği ; 
}
 
int ana ( void ) 
{ 
    int sayı , toplam =  0 ; 
    printf ( "Sayiyi giriniz: " ) ; 
    scanf ( "%d" ,  & sayı ) ; 
    int ben = n ; 
    while  ( ben !=  0 ) 
    { 
        toplam = toplam + faktöriyel ( ben %  10 ) ; 
        ben = ben / 10 ; 
    } 
    if  ( toplam == n ) 
    { 
        printf ( "%d güçlü sayıdır" , sayı ) ; 
    } 
    else 
    { 
        printf ( "%d güçlü bir sayi degildir" , sayi ) ; 
    } 
}
