
#include <stdio.h>

int main (){
	
  
  int agirlik;
  
  float boy, QI;
  
  printf("Kilonuzu giriniz: " );
  
  scanf("%d" ,&agirlik);
  
  printf("Boyunuzu giriniz " );
  
  scanf("%f" ,&boy);
  
  QI = agirlik / (boy * boy);  
     if (QI <= 20) 
      printf("ideal kilonun alti\n");
     else if (QI <= 25)
  	  printf("ideal kilo\n");
     else if (QI <= 30)
   	  printf("ideal kilonun uzeri\n");
     else if (QI <= 40)
      printf("ideal kilonun cok üstü\n");
     else 
      printf("Obezsin\n");
	  			 		        

      return 0;	
	
    }
