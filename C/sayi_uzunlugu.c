#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL,"");
    char cumle[500];
    printf("Sayý giriniz:");
    gets(cumle);
    int i=0;
    int j=strlen(cumle);
    printf("Girilen sayýnýn uzunluðu:%d",j);
    getch();
    return 0;
}
