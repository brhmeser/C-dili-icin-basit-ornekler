#include <stdio.h>
  
  int main(){
  	
  char girdi, cikti;
  
  printf("Karakter girin: ");
  
  
  scanf("%c" ,&girdi);
  
  cikti = girdi + ('a' - 'A');
  
  
  printf("Buyuk %c harfinin kucugu %c harfidir.\n",girdi,cikti);
  
   
  	
  	
  	return 0;
  	
  }
