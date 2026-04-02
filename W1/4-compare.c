#include <stdio.h>

int main(void)
{
    int x;
    int y;

    printf("Digite x: ");
    scanf("%d", &x);
    // %d diz ao scanf que ele deve esperar um dígito decimal
    // & indica o endereço de memória onde o número deve ser guardado (obrigatório para tipos básicos como int e float)

    printf("Digite y: ");
    scanf("%d", &y);

    if (x < y)
    {
        printf("x e menor que y\n");
    }
    else if (x > y)
    {
        printf("x e maior que y\n");
    }
    else
    {
        printf("x e igual a y\n");
    }
}