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

        printf("Digite o 1° número inteiro: ");
        scanf("%d", &numero1);

        printf("Digite o 2° número inteiro: ");
        scanf("%d", &numero2);

        maiorNumero = numero1 > numero2 ? numero1 : numero2;
        menorNumero = numero1 < numero2 ? numero1 : numero2;

    } while (numero1 < 0 || numero2 < 0);

    printf("\nMaior número: %d \n", maiorNumero);
    printf("Menor número:  %d \n", menorNumero);

    return 0;
}