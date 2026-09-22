#include <stdio.h>

#define NUMERO_DE_TENTATIVAS 5

int main(){

    printf("******************************************\n");
    printf("* BEM VINDO AO NOSSO JOGO DE ADIVINHACAO *\n");
    printf("******************************************\n");

int numerosecreto = 42;

int chute;


for (int i = 1; i <= NUMERO_DE_TENTATIVAS; i++){

    printf("Tentativa %d de %d\n", i, NUMERO_DE_TENTATIVAS);

    printf("Digite o seu chute: \n");
    scanf("%d", &chute);        
    printf("Seu chute foi: %d\n", chute);

    if (chute < 0) {
        printf("Voce nao pode chutar numeros negativos!\n");
        i--;
        
        continue;
    }

    int acertou = (chute==numerosecreto);
    int maior = (chute>numerosecreto);
    int menor = (chute<numerosecreto);



    if (acertou) {
        printf("Parabens! Voce acertou!\n");
        printf("Voce e um verdadeiro mestre da adivinhacao!, jogue novamente!\n");  
        
        break;

    }

    else if (maior) {

            printf("Seu chute foi maior que o numero secreto!\n");
    }

    else {
            printf("Seu chute foi menor que o numero secreto!\n");
    }       
    
}
    printf("Fim de jogo!\n");

}