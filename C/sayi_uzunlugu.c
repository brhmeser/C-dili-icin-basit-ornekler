#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL,"");
    char cumle[500];
    printf("Say� giriniz:");
    gets(cumle);
    int i=0;
    int j=strlen(cumle);
    printf("Girilen say�n�n uzunlu�u:%d",j);
    getch();
    return 0;
}
