#include<stdio.h>

int main(){
	
	int sayi1,sayi2,sayi3,sayi4,sayi5,enb1=-2147483646,enb2=-2147483647;
	printf("Bes tamsayi girin: ");	
	scanf("%d",&sayi1);					 
	
	if(sayi1 > enb1){									
		enb2 = enb1;				
		enb1 = sayi1;
	}
	else if(sayi1 > enb2){
		enb2 = sayi1;
	}
	scanf("%d",&sayi2);	
	if(sayi2 > enb1){
		enb2 = enb1;
		enb1 = sayi2;
}
	else if(sayi2 > enb2){
	enb2 = sayi2;
}
	scanf("%d",&sayi3);
	if(sayi3 > enb1){
		enb2 = enb1;
		enb1 = sayi3;
}
	else if(sayi3 > enb2){
		enb2 = sayi3;
}
	scanf("%d",&sayi4);
	if(sayi4 > enb1){
		enb2 = enb1;
		enb1 = sayi4;
}
	else if(sayi4 > enb2){
		enb2 = sayi4;
}
		
	scanf("%d",&sayi5);
	if(sayi5 > enb1){
		enb2 = enb1;
		enb1 = sayi5;
}
	else if(sayi5 > enb2){
		enb2 = sayi5;
}
	printf("En buyuk sayi: %d\n",enb1);
	printf("En buyuk ikinci sayi: %d\n",enb2);
	
	/* En b�y�k say�n�n en b�y�k ikinci say�n�n tam kat� olup olmad���na bak�l�r */

	if(enb1 % enb2 == 0)										   
		printf("%d, %d'nin tam katidir.\n",enb1,enb2);			
 	else
		printf("%d, %d'nin tam kati degildir.\n",enb1,enb2);

	/* En b�y�k say�yla en b�y�k ikinci say�n�n birbirine e�it olup olmad���na bak�l�r */	
 
 	if(enb1 == enb2)									
		printf("%d ve %d esittir.\n",enb1,enb2);		
	else
		printf("%d ve %d esit degildir.\n",enb1,enb2);
		
    /* En b�y�k say�n�n tek veya �ift oldu�una bak�l�r */	

	if(enb1 % 2 == 0)						
		printf("%d cifttir.\n",enb1);		
	else
		printf("%d tektir.\n",enb1);
		
	system("pause");
	return 0;	 
}
