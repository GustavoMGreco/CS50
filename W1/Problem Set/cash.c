#include <stdio.h>

int main(void)
{
    int change;
    int coins = 0;

    do
    {
        printf("Change owed: ");
        int valid = scanf("%i", &change);
        if (valid != 1)
        {
            while (getchar() != '\n')
                ;
            change = -1;
        }
    }
    while (change < 0);

    while (change > 0)
    {
        if (change >= 25)
        {
            change -= 25;
        }
        else if (change >= 10)
        {
            change -= 10;
        }
        else if (change >= 5)
        {
            change -= 5;
        }
        else
        {
            change -= 1;
        }
        coins += 1;
    }
    printf("%i\n", coins);
}
