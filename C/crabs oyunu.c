
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void play_craps();

  int main(void)
{
    char answer,junk;
    do
    {   
        printf("Yeni oyun oynansin mi (e/E - h/H)");
        answer=getchar();
        junk=getchar();
        
		if(answer=='e' || answer=='E')
            play_craps();
  	
	    }while(answer=='e' || answer=='E');
     	if(answer=='h' || answer=='H')
		 printf("CRAPS sona erdi.\n");
		 system("pause");
 		
		 return 0;
}

void play_craps()
{
    int rand_int(int a, int b);
    srand(time(NULL));

    int zar_1,zar_2,zar_3,zar_4,roll,roll_2;
	char ch;
    zar_1=rand_int(1,6);
    zar_2=rand_int(1,6);
    roll=zar_1 + zar_2;
    printf("Zarlar atiliyor... %d  ",roll);

    if(roll==7 || roll==11)
        {
            printf("Kazandiniz\n");
            return ;
        }
    else if(roll==2 || roll==3 || roll==12)
        {
        	printf("Zarlar atiliyor... %d  ",roll);
			printf("Kaybettiniz\n");
            return;
        }
    else
        {
            do
              {
			    zar_3=rand_int(1,6);
                zar_4=rand_int(1,6);
                roll_2=zar_3 + zar_4;
                printf("Sonuc belirsiz, tekrar zar atilacak (a/A)?",roll_2);
                ch=getchar();
                scanf("%c",&ch);
          		printf("Zarlar atiliyor... %d  ",roll_2);
                if(roll_2==roll)
                 {
                     printf("Kazandiniz\n");
                     return;
                 }
            }while(roll_2 != 7);

        printf("Kaybettiniz\n");
        }

}
int rand_int(int a, int b)
{

    return rand()%(b-a+1)+a ;
}
