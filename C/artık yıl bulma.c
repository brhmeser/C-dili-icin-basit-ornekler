#include <stdio.h>

int main () {

	int yil;

	printf("Yil giriniz: ");
	scanf("%d" , &yil);
	
		if(yil % 4 != 0 || (yil % 100 == 0 && yil % 400 != 0))
		   printf("Artik yil degil.\n");
		
			else
				 printf("Artik yil.\n");
				 
	return 0 ;
}
