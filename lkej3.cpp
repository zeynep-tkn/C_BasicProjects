#include<stdio.h> //iki sayinin ebobunu bulma
int main(){
	int n,m,ebob;
	printf("sayi girin:");
	scanf("%d",&n);
	printf("sayi girin:");
	scanf("%d",&m);
	for(int i=1;i<=n && i<=m;i++){
	if(m%i==0 && n%i==0)
	ebob=i;
	}
	printf("ebob=%d",ebob);
	return 0;
}
/*



*/
