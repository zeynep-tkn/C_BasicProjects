 #include <stdio.h>
 int main()
 {

     FILE *dosya;

     int i = 1;

     dosya = fopen("sayilar.txt","w");

     while(i<11)

     {

       fprintf(dosya,"%d\n",i);
       i++;        
     }
    getchar();

fclose(dosya);
}
