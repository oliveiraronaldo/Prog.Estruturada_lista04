#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    int player, maquina;
    int escolha;

    srand(time(NULL));
    printf("Par ou Impar: \n(1) Par\n(2) Impar\n");
    scanf("%d", &escolha);
    printf("Digite um numero inteiro de 0 a 5: ");
    scanf( "%d", &player);

    maquina = rand() % 6;

    int  resultado = player + maquina;

    if((escolha == 1 && resultado % 2 == 0) || (escolha == 2 && resultado % 2 != 0)){
        printf("Maquina: %d \nPlayer: %d\nPlayer Venceu!: %d", maquina, player,  resultado);
    }else{
        printf("Maquina: %d \nPlayer: %d\nMaquina Venceu!: %d", maquina, player,  resultado);
    }

    return 0;
}
