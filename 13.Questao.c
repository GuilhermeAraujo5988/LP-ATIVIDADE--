#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numero1;
    int numero2;
    int maiorNumero;
    int menorNumero;
    do
    {

        printf("Digite o 1� n�mero inteiro: ");
        scanf("%d", &numero1);

        printf("Digite o 2� n�mero inteiro: ");
        scanf("%d", &numero2);

        maiorNumero = numero1 > numero2 ? numero1 : numero2;
        menorNumero = numero1 < numero2 ? numero1 : numero2;

    } while (numero1 < 0 || numero2 < 0);

    printf("\nMaior n�mero: %d \n", maiorNumero);
    printf("Menor n�mero:  %d \n", menorNumero);

    return 0;
}