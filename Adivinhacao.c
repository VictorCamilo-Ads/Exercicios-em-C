#include <stdio.h>

int main(){

    printf("******************************************\n");
    printf("* BEM VINDO AO NOSSO JOGO DE ADIVINHACAO *\n");
    printf("******************************************\n");

int numerosecreto = 42;

int chute;

printf("Digite o seu chute: \n");
scanf("%d", &chute);        
printf("Seu chute foi: %d\n", chute);

if (chute == numerosecreto) {
    printf("Parabens! Voce acertou!\n");
    printf("Voce é um verdadeiro mestre da adivinhação!, jogue novamente!\n");
} else {
    printf("Voce errou! mas não desanime, tente novamente!\n");
}



}