#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "potuguese");

    float compra;
    char dia;
    float desconto;
    float valorTotal;

    printf("Digite A para dia da semana. \n");
    printf("Digite B para final de semana: \n");
    scanf("%c", &dia);

    printf("Digite o valor da compra: R$ \n");
    scanf("%f", &compra);

    if (compra > 100.0)
    {
        if (dia == 'A' || dia == 'a')
        {
            desconto = compra * 0.10;
        }
        else if (dia == 'B' || dia == 'b')
        {
            desconto = compra * 0.15;
        }
    }

    valorTotal = compra - desconto;

    printf("Valor da compra: R$ %.2f\n", compra);
    printf("Valor do desconto: R$ %.2f\n", desconto);
    printf("Valor total com desconto: R$ %.2f\n", valorTotal);

    return 0;
}