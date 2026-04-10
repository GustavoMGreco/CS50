#include <stdio.h>

int main(void)
{
    // criei um buffer (espaço na memória) para guardar o nome.
    // aqui reservo espaço para até 49 letras + o caractere nulo final.
    char answer[50];

    printf("Digite seu nome: ");

    // uso scanf para ler o que o usuário digitar.
    // %49s limita a leitura para não estourar o tamanho do buffer.
    // usar o & aqui é redundante:
    // answer - É um ponteiro para um caractere (char *). É exatamente o que o %s do scanf espera.
    // &answer - É um ponteiro para um array inteiro de 50 caracteres (char (*)[50]).
    scanf("%49s", answer);
    // obs: scanf para de ler após o primeiro espaço, para ler nomes completos com espaços, se usa fgets(answer, sizeof(answer), stdin);

    // %s para indicar onde a variável deve ser impressa.
    printf("Ola, %s\n", answer);
}