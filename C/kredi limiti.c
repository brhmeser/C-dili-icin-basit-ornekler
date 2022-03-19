#include <stdio.h>

int main() {
	
	float bakiye, harcama, kredi, kredi_limiti;
	
	printf("Bakiye gir: ");
	scanf("%f",&bakiye);
	printf("Harcama gir: ");
	scanf("%f",&harcama);
	printf("Kredi gir: ");
	scanf("%f",&kredi);
	printf("Kredi limiti gir: ");
	scanf("%f",&kredi_limiti);
	
	if (((bakiye+harcama)-(kredi+kredi_limiti)) > 0)
		printf("Kredi limiti asildi\n");
	else
		printf("Kredi limiti asilmadi\n");
	
	return 0;
}
