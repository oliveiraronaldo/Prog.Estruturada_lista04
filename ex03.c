#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int numero = rand() % 101;
    int chute;
    int i = 0;

    printf("Tente acertar o numero correto: ");

    do
    {
        scanf("%d", &chute);
        if(chute < numero){
            printf("O numero e maior que o digitado\n");
        }else if(numero < chute){
            printf("O numero e menor que o digitado\n");
        }
        i++;
    } while (numero != chute && i < 5);

    if( i == 5  && numero != chute){
        printf("Numero de tentativas excedidas!! Perdeu!!");
    }else{
        printf("Resposta certa!!");
    }


    
    

    return 0;
}
