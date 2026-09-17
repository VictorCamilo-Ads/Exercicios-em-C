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

int acertou = (chute==numerosecreto);

if (acertou) {
    printf("Parabens! Voce acertou!\n");
    printf("Voce é um verdadeiro mestre da adivinhação!, jogue novamente!\n");    

}

else {
    int maior = (chute>numerosecreto);

    if(maior) {
        printf("Seu chute foi maior que o numero secreto!\n");
    }
    else {
        printf("Seu chute foi menor que o numero secreto!\n");
    }       
}



}