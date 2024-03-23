#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    int primeiro, segundo, terceiro, quarto, quinto, sexto;

    srand(time(NULL));

    int min = 1;
    int max = 60;

    primeiro = min + rand() % (max - min + 1);

    do
    {
        segundo = min + rand() % (max - min + 1);
    } while (segundo == primeiro);

    do
    {
        terceiro = min + rand() % (max - min + 1);
    } while (terceiro == primeiro || terceiro == segundo);

    do
    {
        quarto = min + rand() % (max - min + 1);
    } while (quarto == primeiro || quarto == segundo || quarto == terceiro);

    do
    {
        quinto = min + rand() % (max - min + 1);
    } while (quinto == primeiro || quinto == segundo || quinto == terceiro || quinto == quarto);

    do
    {
        sexto = min + rand() % (max - min + 1);
    } while (sexto == primeiro || sexto == segundo || sexto == terceiro || sexto == quarto || sexto == quinto);

    printf("Sequencia entre 1 ate 60: %d %d %d %d %d %d", primeiro, segundo, terceiro, quarto, quinto, sexto);


    


    return 0;
}
