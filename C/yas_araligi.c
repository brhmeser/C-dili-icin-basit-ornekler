#include <stdio.h>
int main() {
	
	float yas,deger;
	
	printf("Yas Giriniz:\n ");
	scanf("%f",&yas);
	
	deger=(100-yas)/100;
	
	 if (yas < 0) 
		printf("Bu kadar kucuk yasta kisi olamaz.\n");

	 if (yas > 100)
		printf("Bu kadar buyuk yasta kisi olamaz.\n");

     if ( yas>0 && yas<100){
  
     if (deger>0.91)
		printf("Kisi bebektir.\n");
   
     else if (deger>0.81)
		printf("Kisi cocuktur.\n");

	 else if(deger>0.66)
	 	printf("Kisi genctir.\n");

     else if (deger>0.36)
	 	printf("Kisi orta yaslidir.\n");

	 else if (deger>0.16)
	 	printf("Kisi yaslidir.\n");

	 else if (deger>=0)
	 	printf("Kisi cok yaslidir.\n");
		 	}

	system("pause");
	return 0;
}
	
