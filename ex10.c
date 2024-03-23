#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int n1, n2, soma;

    n1 = rand() % 100;
    n2 = rand() % 100;


    printf("Numeros Gerados: %d e %d\nDigite a soma dos numeros: ", n1, n2);
    scanf("%d", &soma);

    if(soma == (n1 + n2)){
        printf("Resposta certa!!");
    }else{
        printf("Resposta Errada!!");
    }



    return 0;
}
