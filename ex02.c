#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    int player, maquina;

    printf("Escolha:\n(0)Pedra\n(1)Papel\n(2)Tesoura\n");
    scanf("%d", &player);

    srand(time(NULL));

    maquina = rand() % 3;

    if(maquina == 0 && player == 1){
        printf("Maquina: Pedra \nPlayer: Papel \nPlayer Venceu!!");
    }else if(maquina == 0 &&  player == 2){
        printf("Maquina: Pedra \nPlayer: Tesoura \nMaquina Venceu!!");
    }else if(maquina == 1 && player == 0){
        printf("Maquina: Papel \nPlayer: Pedra \nMaquina Venceu!!");
    }else if(maquina == 1 && player == 2){
        printf("Maquina: Papel \nPlayer: Tesoura \nPlayer Venceu!!");
    }else if(maquina == 2 && player == 0){
        printf("Maquina: Tesoura \nPlayer: Pedra \nPlayer Venceu!!");
    }else if(maquina == 2 && player == 1){
        printf("Maquina: Tesoura \nPlayer: Papel \nMaquina Venceu!!");
    }else if(maquina == player){
        printf("Empate");
    }else{
        printf("Jogada Invalida!");
    }


    return 0;
}
