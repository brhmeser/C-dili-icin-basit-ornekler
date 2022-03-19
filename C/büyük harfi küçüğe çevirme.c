#include <stdio.h>

int main () {
 
char a ;

printf("Buyuk harf giriniz: ");
a = getchar();

a += 'a'-'A';	
	
	
printf("Harfin kucuk hali %c'dir.\n", a);

system("pause");
	
	return 0 ;
	
}
