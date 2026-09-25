#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

    //imprime cabecalho do jogo
        printf("          P  /_\\  P                                 \n");
        printf("         /_\\_|_|_/_\\                               \n");
        printf("     n_n | ||. .|| | n_n         Bem vindo ao        \n");
        printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhacao!    \n");
        printf("    |" "  |  |_|  |"  " |                            \n");
        printf("    |_____| ' _ ' |_____|                            \n");
        printf("          \\__|_|__/                                 \n");
        printf("\n\n");




int segundos = time(0); //pega o tempo atual do sistema
srand(segundos); //semente para gerar numeros aleatorios

int numerogrande = rand(); //gera numero aleatorio grande

int numerosecreto = numerogrande % 100; //gera numero aleatorio entre 0 e 99
int chute; 
int tentativas = 1; 
double pontos = 1000;

int acertou = 0;

 // imprime o nivel de dificuldade e define o numero de tentativas baseado na escolha do usuario 
int nivel;
printf("Qual nivel de dificuldade?\n");
printf("(1) Facil (2) Medio (3) Dificil\n\n");
printf("Escolha: ");
scanf("%d", &nivel);


int numerodetentativas = 5;

//switch case para definir o numero de tentativas baseado no nivel escolhido
switch (nivel)
{
case 1:
    numerodetentativas = 20;
    break;
case 2:
    numerodetentativas = 12;
    break;
default:
    numerodetentativas = 6;
    break;
}

//loop para o usuario chutar o numero secreto
for(int i = 1; i <= numerodetentativas; i++){

    printf("Tentativa %d\n", tentativas); 
    printf("Digite o seu chute: \n");

    scanf("%d", &chute);        
    printf("Seu chute foi: %d\n", chute);

    if (chute < 0) {
        printf("Voce nao pode chutar numeros negativos!\n");

        continue;
    }

    acertou = (chute==numerosecreto);
    int maior = chute>numerosecreto;

    if (acertou) {
        break;
    }

    else if (maior) {
        printf("Seu chute foi maior que o numero secreto!\n");
    }

    else {
        printf("Seu chute foi menor que o numero secreto!\n");
    }       

    tentativas++;
    
    //calcula a pontuacao do jogador baseado na diferenca entre o chute e o numero secreto
    double pontosperdidos = abs(chute - numerosecreto) / (double)2;
    pontos = pontos - pontosperdidos; 

}
    //imprime o resultado do jogo
    printf("Fim de jogo!\n");

    if(acertou) {

    printf("             OOOOOOOOOOO                  \n");
    printf("          OOOOOOOOOOOOOOOOOOO             \n");
    printf("       OOOOOO  OOOOOOOOO  OOOOOO          \n");
    printf("     OOOOOO      OOOOO      OOOOOO        \n");
    printf("   OOOOOOOO  #   OOOOO  #   OOOOOOOO      \n");
    printf("  OOOOOOOOOO    OOOOOOO    OOOOOOOOOO     \n");
    printf(" OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO    \n");
    printf(" OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO    \n");
    printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO    \n");
    printf("  OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO     \n");
    printf("   OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO      \n");
    printf("     OOOOO   OOOOOOOOOOOOOOO   OOOO       \n");
    printf("       OOOOOO   OOOOOOOOO   OOOOOO        \n");
    printf("          OOOOOO         OOOOOO           \n");
    printf("              OOOOOOOOOOOO                \n");
    printf("\n\n");


        printf("Parabens!Voce ganhou!\n");
        printf("Voce acertou em %d tentativas!\n", tentativas);
        printf("Total de pontos: %.1f\n", pontos);
        
    } else {
        printf("Voce perdeu! Tente novamente.\n");

    printf("           \\|/ ____ \\|/                \n");
    printf("            @~/ ,. \\~@                  \n");
    printf("           /_( \\__/ )_\\                \n");
    printf("              \\__U_/                    \n");

    }


}