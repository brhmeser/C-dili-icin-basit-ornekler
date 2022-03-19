#include <stdio.h>

/* Okudugu buyuk harfi kucuk harfe cevirir.*/

int main(){
	char a;

	printf("Buyuk harf girin: ");

	a = getchar();
	a += 'A'-'a';

	printf("Harfin buyuk hali %c'dir.\n", a);
	system("pause");

	return 0;

}
