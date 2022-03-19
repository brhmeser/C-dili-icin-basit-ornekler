#include <stdio.h>

int main ()
{

	int sayi=0,min,sayac = 0 ;
		
		while(sayi != -1)
		{
			
			printf("sayi gir: ");
			scanf("%d",&sayi);	
			if(sayac==0)
			{
				min = sayi ;
			}
			else if(sayi < min && sayi !=-1)
			{
				min = sayi ;
			}
			sayac++ ;

		}
	
			printf("en kucuk sayi : %d",min);
	
	
	return  0; 
}
