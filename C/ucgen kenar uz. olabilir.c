#include <stdio.h>

int main() {
	
	float a, b, c;
	
	printf("Kenar uzunluklarini gir: ");
	scanf("%f%f%f",&a,&b,&c);
	
	if ((a-b < c) && (a+b > c)
		&& (a-c <b) && (a+c >b)
		&& (b-c <a) && (b+c > a))
		printf("%.2f, %.2f ve %.2f bir ucgenin kenar uzunluklari olabilir.\n",a,b,c);
	else
		printf("%.2f, %.2f ve %.2f bir ucgenin kenar uzunluklari olamaz.\n",a,b,c);

	return 0;	
}
