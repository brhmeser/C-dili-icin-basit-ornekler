#include <stdio.h>

void yatayCizgiCiz (int n) {
	
	int i;
	
	printf(" ");
	for (i=0; i<n; i++)
		printf("-");
	printf("\n");
}

void dikeyCizgiCiz (int n) {
	
	int i;
	
	printf("|");
	for (i=0; i<n; i++)
		printf(" ");
	printf("|\n");
}
	
void kareCiz(int n, int m) {
	
	int i;
	
	yatayCizgiCiz(m);

	for (i=0; i<n; i++)
		dikeyCizgiCiz(m);
	
	yatayCizgiCiz(m);
	
}

int main() {
	
	int n = 2, m = 5;
	kareCiz(n, m);
	
	printf("\n");
	
	n = 8;
	m = 3;
	kareCiz(n, m);
	
	system("pause");
	return 0;
}
