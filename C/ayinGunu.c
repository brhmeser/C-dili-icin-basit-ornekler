#include <stdio.h>

int main() {
	
	int ayNo;
	
	printf("Hangi ay?: ");
	scanf("%d",&ayNo);
	
	if (ayNo < 1 || ayNo > 12)
		printf("Girdi hatali\n");
	else if (ayNo == 2)
		printf("28 veya 29 gun\n");
	else if (ayNo == 4 || ayNo == 6 || ayNo == 9 || ayNo == 11)
		printf("30 gun\n");
	else 
		printf("31 gun\n");
	
	return 0;
}
