#include <stdio.h>
int main()
 fakt�riyel ( int n ) 
{ 
    int ben , ger�ek =  1 ; 
    i�in  ( ben =  1 ; ben <= n ; ben ++ ) 
    { 
        ger�ek = ger�ek * ben ; 
    } 
    d�n�� ger�e�i ; 
}
 
int ana ( void ) 
{ 
    int say� , toplam =  0 ; 
    printf ( "Sayiyi giriniz: " ) ; 
    scanf ( "%d" ,  & say� ) ; 
    int ben = n ; 
    while  ( ben !=  0 ) 
    { 
        toplam = toplam + fakt�riyel ( ben %  10 ) ; 
        ben = ben / 10 ; 
    } 
    if  ( toplam == n ) 
    { 
        printf ( "%d g��l� say�d�r" , say� ) ; 
    } 
    else 
    { 
        printf ( "%d g��l� bir sayi degildir" , sayi ) ; 
    } 
}
