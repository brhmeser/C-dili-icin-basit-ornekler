#include <stdio.h>

int main() {

	int saniye;
	int ST, DK, SN;
	
	printf("Saniye cinsinden zaman gir: ");
	scanf("%d",&saniye);
	
	ST = saniye/3600;
	saniye -=  ST*3600;
	
	DK = saniye/60;
	SN = saniye - DK*60;
	
	if (ST < 10)
	
		printf("0");
		printf("%d:",ST); 
	
	if (DK < 10)
	
		printf("0");
		printf("%d:",DK);
	
	if (SN < 10)
	
		printf("0");
		printf("%d",SN);
	
	return 0;	

}
