#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
   setlocale (LC_ALL, "portuguese"); 

    int numero;
    int i;
    int numeroPrimo = 1;

    printf("Digite um n�mero inteiro, para saber se � primo ou n�o: ");
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
        printf("N�mero primo \n");
        break;
    default:
        printf("N�mero n�o � primo \n");
        break;
    }

    return 0;
}