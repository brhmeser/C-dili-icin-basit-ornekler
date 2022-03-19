#include <stdio.h>

int main() {
	
	float tuketim;
	float bedel = 0.0;
	
	printf("Tuketimi gir: ");
	scanf("%f",&tuketim);
	
	if (tuketim <= 50)
		bedel += tuketim*0.5;
	else {
		bedel += 50*0.5;
		tuketim -= 50;
		if (tuketim <= 100)
			bedel += tuketim*0.75;
		else {
			bedel += 100*0.75;
			tuketim -= 100;
			if (tuketim <= 100)
				bedel += tuketim*1.20;
			else {
				bedel += 100*1.20;
				tuketim -= 100;
				bedel += tuketim*1.5;
			}
		}
	}
	
	bedel *= 1.2;
		
	printf("Fatura bedeli = %.2f\n",bedel);
	
	return 0;
}
