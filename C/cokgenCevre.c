#include <stdio.h>

int main() {
	
	int kenar_sayisi = 0;
	float uzunluk, cevre = 0;

	printf("Kenar sayisini girin: ");
	scanf("%d",&kenar_sayisi);
	
	if (kenar_sayisi<3)


		printf("Cokgen degil...\n");

	else {
		while (kenar_sayisi>0) {
			printf("Kenar uzunlugu girin: ");

			scanf("%f",&uzunluk);

			cevre += uzunluk;

			kenar_sayisi--;
		} 
		
		

		printf("Cevre: %.2f\n",cevre);
	}
	
	system("pause");

	return 0;
}
