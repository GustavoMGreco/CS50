#include <stdio.h>

// prototype: escrever apenas a primeira linha da função no começo do código para evitar implicit declaration of function
int get_n(void);
void meow(int);

int main(void)
{
    int n = get_n();
    meow(n);

    return 0;
}

int get_n(void)
{
    int n;
    do
    {
        printf("Digite o numero de meows: ");
        scanf("%d", &n);
    }
    while (n < 0);

    return n;
}

void meow(int n)
{
    for (int i = 0; i < n; i++) 
    {
        printf("meow\n");
    }
}