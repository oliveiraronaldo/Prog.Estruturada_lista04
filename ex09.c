#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int mes = 1 + rand() % 12;
    int ano = 2000 + rand() % (2024 - 2000 + 1);
    int dia;

    if(ano % 4 == 0 && mes == 2){
        dia = 1 + rand() % 29;
    }else if(mes == 2){
        dia = 1 + rand() % 28;
    } else if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
        dia = 1 + rand() % 30;
    }else{
        dia = 1 + rand() % 30;
    }

    printf("%d/%d/%d", dia, mes, ano);
    
    return 0;
}
