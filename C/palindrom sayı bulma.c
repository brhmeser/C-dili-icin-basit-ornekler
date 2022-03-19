#include <stdio.h>

int main ()  {
	
	int sayi ;
	int obb,bb,yb,ob,brb ;
	
	printf("5 basamakli sayi giriniz: ");
	scanf("%d",&sayi);

	obb = sayi/10000 ;
	bb  = (sayi/1000) % 10 ;
	yb  = (sayi/100) % 10 ;
	ob  = (sayi/10) % 10 ;
	brb = sayi%10 ;
	
	if((obb==brb) && (bb == ob))
	   printf("%d sayisi palindromdur.\n", sayi);
	   else
	   	   printf("%d sayisi palindrom degildir.\n", sayi);
	

	return 0 ;
}
