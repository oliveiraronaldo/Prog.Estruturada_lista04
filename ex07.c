#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int numeros[3];
    int n;

    for(int i = 0; i < 3; i++){
        do
        {
            n = 0;
            n = 100 + rand() % (999 - 100 + 1);
        } while (n % 5 != 0);
        numeros[i] = n;
        printf("%d ", numeros[i]);
    }

    return 0;
}
