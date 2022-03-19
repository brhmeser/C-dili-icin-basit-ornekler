#include <stdio.h>
int main () {
	
	int i,j,l,k;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
	{
			printf("*");
		
		}
	printf("\n");
	}	
	for(l=1;l<=5;l++)
	{
		for(k=5;k>=l;k--)
		{
		printf("*");}
	
	printf("\n"); }
	return 0;
}
