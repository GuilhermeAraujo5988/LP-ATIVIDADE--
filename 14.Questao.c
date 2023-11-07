#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numero;
    float somaPar = 0;
    float somaImpar = 0;
    int pares = 0;
    int impares = 0;
    float mediaPar = 0;
    float mediaImpar = 0;

    do
    {
        printf("Digite os numeros: \n");
        scanf("%d", &numero);

        if (numero > 0)
        {

            if (numero % 2 == 0)
            {

                pares++;
                somaPar += numero;
            }
            else
            {
                impares++;
                somaImpar += numero;
            }
        }
    } while (numero > 0);

    mediaPar = (float)somaPar / pares;
    mediaImpar = (float)somaImpar / impares;
    
    printf("\nQuantidade de números pares: %d\n", pares);
    printf("Quantidade de números Impares: %d\n", impares);
    printf("\nMédia dos números pares: %.1f\n", mediaPar);
    printf("Média dos números impares: %.1f\n", mediaImpar);

    return 0;
}