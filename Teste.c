#include <stdio.h>

int main()
{
    char nome [50];
    int idade;

    printf("Qual o seu nome?\n");
    scanf("%49s" , nome);

    printf("Qual a sua Idade?\n");
    scanf("%d", &idade);

    printf("\nOlá %s!\n", nome);
    printf("Voce tem %d anos.\n", idade);


return 0;

}