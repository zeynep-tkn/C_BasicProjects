   #include<stdio.h>
  
    int main(){
	
    float armut,elma;
	float tutar;
	printf("kac kilo armut:");
	scanf("%f",&armut);
	printf("kac kilo elma:");
	scanf("%f",&elma);
	tutar=armut*15+elma*20;
	printf("odenecek tutar:%f",tutar);
	
	return 0;
}
