#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	int girdi,random;
	char a ;
	system("color b");
	
	printf("\t\t\t\t HOSGELDINIZZ ");
	a=getchar();
	printf("\n\n KIRMIZIYSA K SIYAHSA S GIR..\n");
  
    girdi=getchar();
    
	srand(time(NULL));
    random = rand() % 10 + 1;
      	
    
	if(random==1 || random==3 || random==5 || random==7 || random==9)
	{
		  
        a=getchar();
     	printf("\nROLLING...\n");
     	a=getchar();
     	printf("\nROLLING...\n");
     	a=getchar();
     	printf("\nROLLING...\n");
     	a=getchar();
     	
      	system("color 8");
      	printf("\nSIYAH GELDII !!");
	   	
    }
  
     else 
	  {
        a=getchar();
     	printf("\nROLLING...\n");
     	a=getchar();
     	printf("\nROLLING...\n");
     	a=getchar();
     	printf("\nROLLING...\n");
     	a=getchar();
     	
      	system("color c");
      	printf("KIRMIZI GELDII HUUHUAA !!");
      	
	   	  	
      }
	
    	return 0 ;
	
}
