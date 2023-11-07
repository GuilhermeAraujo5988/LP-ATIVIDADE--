#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
   setlocale (LC_ALL, "portuguese"); 

    int numero;
    int i;
    int numeroPrimo = 1;

    printf("Digite um número inteiro, para saber se é primo ou não: ");
    scanf("%d", &numero);

    if (numero < 2)
    {
        numeroPrimo = 0;
    }
    else
    {

        for (i = 2; i <= numero; i++)
        {
            if (numero % i == 0)
            {
                numeroPrimo = 0;
                break;
            }
        }
    }

    switch (numeroPrimo)
    {
    case 1:
        printf("Número primo \n");
        break;
    default:
        printf("Número não é primo \n");
        break;
    }

    return 0;
}