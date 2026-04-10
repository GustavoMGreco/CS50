#include<stdio.h>

int main(void)
{
    char answer;

    printf("Voce concorda? (y/n): ");

    scanf("%c", &answer);
    // como answer é um caractere único (char), preciso do & para o scanf saber onde colocar a letra

    if (answer == 'y' || answer == 'Y')
    {
        printf("Concordou\n");
    } 
    else if (answer == 'n' || answer == 'N')
    {
        printf("Nao concordou\n");
    }
    else
    {
        printf("Resposta inválida\n");
    }
}