#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int defesa = 1 + rand() % 9;
    int chute;

    printf("=================================================\n|	1	|	2	|	3	|\n|		|		|		|\n|	4	|	5	|	6	|\n|		|		|		|\n|	7	|	8	|	9	|");
    printf("\n\nEscolha o numero correspondente para onde chutar no gol!!\n\n");
    scanf("%d", &chute);

    if(chute == defesa) {
        printf("Defesaaaa!!");
    }else if(chute < 0 || chute > 9){
        printf("Errouuuuu!!");
    } else{
        printf("GOOOOOOL!!!");
    }

    return 0;
}
