 #include <stdio.h>

int main() {
	
	float satis;
	int secim;
	
	do {
		printf("Haftalik satis?: ");
		scanf("%f",&satis);
		printf("Haftalik kazanc = %.2f\n",200+satis*0.09);
		
		printf("Devam (cikis icin -1)?: ");
		scanf("%d",&secim);
	}
	while (secim != -1);
	
	return 0;
}
