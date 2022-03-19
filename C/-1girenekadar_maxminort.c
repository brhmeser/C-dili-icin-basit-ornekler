#include <stdio.h>

int main(){
	float min1,min2,max1= 0, max2 = 0,ort = 0 ,sayac = 0,toplam = 0 ,sayi ;
	printf("Sayi girin: ");
	scanf("%f",&sayi);
	min1 = sayi ;        
	min2 = sayi ;
     
	while(sayi>=0){            
	 
	  if(sayi > max1 ){        
	 	max2 = max1;
	 	max1 = sayi;
	 }  	 
     if(sayi < max1 && max2 < sayi ){
	 	max2 = sayi;
  	 }
	 
	 if(sayi < min1 ){
	 	min2 = min1;
	 	min1 = sayi;
	 }
	 if(min1 == min2 ){
	 	min2 = sayi;
  	 }
     if(sayi > min1 && min2 > sayi ){
	 	min2 = sayi;
  	 }
	
	 sayac++;
	 toplam += sayi;
	 ort=ort+sayi;
	 printf("Sayi giriniz:");
	 scanf("%f",&sayi);	
}
printf("En buyuk sayi: %.2f \nEn buyuk 2. sayi: %.2f \nEn kucuk sayi: %.2f \nEn kucuk 2. sayi: %.2f \nOrtalama :%.2f \n\nHOSCAKAL",max1,max2,min1,min2,ort/sayac);

	return 0 ;
}

