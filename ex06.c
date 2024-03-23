#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));

    int numeros[10];
    for(int i = 0; i < 10;  i++){
        numeros[i] = rand() % 100;
        printf("%d ", numeros[i]);
    }

    


    return 0;
}
