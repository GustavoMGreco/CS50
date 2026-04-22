#include<stdio.h>

int main(void)
{
    char answer[50];

    printf("What's your name? ");

    fgets(answer, sizeof(answer), stdin);

    printf("hello, %s", answer);
}
