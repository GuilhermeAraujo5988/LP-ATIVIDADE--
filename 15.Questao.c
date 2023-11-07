#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int op;
    float fahrenheit;
    float celsius;
    float milhas;
    float quilometros;

    do
    {
        printf("\n UNIDADE DE MEDIDAS \n");
        printf("1 - Quilomentros para milhas \n");
        printf("2 - Fahrenheit para celsius \n"); 
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            printf("Digite a quantidade de KM: ");
            scanf("%f", &quilometros);

            milhas = quilometros * 0.621371;

            printf("Milhas: %f \n", milhas);
            break;

        case 2:
            printf("Digite os celsius: ");
            scanf("%f", &celsius);

            fahrenheit = (celsius * 9 / 5) + 32;

            printf("Fahrenheit: %f \n", fahrenheit);
            break;
        }

    } while (op != 0);
    return 0;
}