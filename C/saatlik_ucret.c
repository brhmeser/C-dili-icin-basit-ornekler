#include <stdio.h>

int main() {
	
	float saat_ucr;
	int saat;
	int secim;
	float kazanc = 0.0;
	
	do {
		printf("Kac saat calisti?: ");
		scanf("%d",&saat);
		printf("Saatlik ucret ne?: ");
		scanf("%f",&saat_ucr);
		
		if (saat <= 40)
			kazanc = saat*saat_ucr;
		else
			kazanc = 40*saat_ucr +  (saat-40)*saat_ucr*1.5; 
			
		printf("Aylik kazanc = %.2f\n",kazanc);
		
		printf("Devam (cikis icin -1)?: ");
		scanf("%d",&secim);
	}
	while (secim != -1);
	
	return 0;
}
