#include <stdio.h>

void kdegistir(int a, int b) {
	
	int gecici;
	
	gecici = a;
	a = b;
	b = gecici;

}

void kdegistir2(int *a, int *b) {
	
	int gecici;
	
	gecici = *a;
	*a = *b;
	*b = gecici;
}

int main() {
	
	int a, b;
	
	printf("Sayilar gir: ");
	scanf("%d%d",&a,&b);
	
	printf("a = %d, b = %d\n",a,b);
	kdegistir(a, b);
	printf("a = %d, b = %d\n",a,b);
	
	printf("a = %d, b = %d\n",a,b);
	kdegistir2(&a, &b);
	printf("a = %d, b = %d\n",a,b);
	
}
