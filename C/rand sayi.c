#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

int main()
{

int random;
char a ;

printf("Enter tusuna basiniz: ");
scanf("%c",&a);

srand(time(NULL)); 
random=1+rand()%12;

printf("\n\nUretilen random sayi : %d",random);

return 0;
}

