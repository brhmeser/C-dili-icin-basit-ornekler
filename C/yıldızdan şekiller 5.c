#include <stdio.h>

//dik üçgen
int main() {
	int i,j,taban ;
	printf("taban girin: ");
	scanf("%d",&taban);
		for(i=1;i<=taban;i++)
	{
		for(j=1;j<=i;j++)
		printf("*");
		printf("\n");
	}
	
	
	return 0 ;
}
