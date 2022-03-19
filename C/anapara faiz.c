#include <stdio.h>

int main() {

	float anapara;
	int faiz;
	int gunler;
	
	printf("Anapara gir: ");
	scanf("%f",&anapara);
	printf("Faiz gir: ");
	scanf("%d",&faiz);
	printf("Kac gun?: ");
	scanf("%d",&gunler);
	
	printf("Toplam varliginiz: %.2f\n", anapara + anapara*faiz/100*gunler/365);

	return 0;	
}
