#include <stdio.h>

int main() {
	
	int sayi, i;
	int limit;
	long fakt;
	
	printf("Limit girin: ");
	scanf("%d",&limit);
	
	if (limit < 0)
		printf("Hatali limit girildi.\n");
	else {
		for (sayi=0; sayi<=limit; sayi++) {
			fakt = 1;
			for (i=2; i<=sayi; i++)
				fakt *=i;
			printf("%d! = %ld\n", sayi, fakt);
		}
	}
		
	system("pause");
	return 0;
}
