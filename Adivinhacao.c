#include <stdio.h>


int main(){

    //imprime cabecalho do jogo
    printf("******************************************\n");
    printf("* BEM VINDO AO NOSSO JOGO DE ADIVINHACAO *\n");
    printf("******************************************\n");

int numerosecreto = 42;

int chute;

int tentativas = 1;

double pontos = 1000;


while (1) {

    printf("Tentativa %d\n", tentativas); 
    printf("Digite o seu chute: \n");
    scanf("%d", &chute);        
    printf("Seu chute foi: %d\n", chute);

    if (chute < 0) {
        printf("Voce nao pode chutar numeros negativos!\n");

        continue;
    }

    int acertou = (chute==numerosecreto);
    int maior = (chute>numerosecreto);


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

    tentativas++;


    double pontosperdidos = (chute - numerosecreto) / (double)2;
    pontos = pontos - pontosperdidos;    
}

    printf("Fim de jogo!\n");
    printf("Voce acertou em %d tentativas!\n", tentativas);
    printf("Total de pontos: %.1f\n", pontos);

}