#include<stdio.h>

int main(void)
{
    // int i = 0;
    // while (i < 3)
    // {
    //     printf("meow\n");
    //     i++;
    // }

    // for (int j = 0; j < 3; j++)
    // {
    //     printf("meow\n");
    // }

    int n;

    do
    {
        printf("Digite um numero (>= 0): ");
        scanf("%i", &n);
    }
    while (n < 0);

    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }

}