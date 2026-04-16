#include <stdio.h>

int get_n(void)
{
    int n;
    do
    {
        printf("Digite um numero: ");
        scanf("%d", &n);
    } while (n < 0);
    
    return n;
}

int main(void)
{
    int n = get_n();

    for (int row = 0; row < n; row++)
    {
        for (int column = 0; column < n; column++)
        {
            printf("# ");
        }
        
        printf("\n");
    }
    printf("\n");
    
    return 0;
}