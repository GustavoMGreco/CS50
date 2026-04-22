#include<stdio.h>

int main(void)
{
    int n;
    int a;

    do
    {
        printf("Height: ");
        scanf("%i", &n);
    } while (n < 1 || n > 8);

    for (int i = 1; i <= n; i++)
    {
        a = i;

        for (int j = 0; j < n-i; j++)
        {
            printf(" ");
        }

        for (int j = i; j > 0; j--)
        {
            printf("#");
        }

        printf("  ");

        for (int j = i; j > 0; j--)
        {
            printf("#");
        }
        printf("\n");
    }
}
