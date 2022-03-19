#include <stdio.h>

int main() {
 
 int i,j,k,n,p,r;
 
  for(i=1;i<=10;i++)
  {
  for(j=1;j<=i;j++)
  {
    printf("*");
  }
    printf("\n");
  }




 printf("\n");printf("\n");printf("\n");
 


   for(k=1;k<=10;k++)
   {
   for(n=10;n>=k;n--)
   {
     printf("*");
   }
     printf("\n");
   }
 
 
 
  printf("\n");printf("\n");printf("\n");
  
  
   for(i=10 ; i>=1 ; i--){     	
	
   for(j=1 ; j<=10-i ; j++){
		printf(" ");
	}
   for(j=1 ; j<=i ; j++){
		printf("*");	
	}
		printf("\n");
	}
	
	
	
	 printf("\n");printf("\n");printf("\n");
	 
	 
	 
	 
  	for(i=1 ; i<=10 ; i++){
	  	
	for(j=1 ; j<=10-i ; j++){
			printf(" ");
	}
		for(j=1 ; j<=i ; j++){
			printf("*");
	}
			printf("\n");   
	
	}
 
	return 0;
}
