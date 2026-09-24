#include <stdio.h>

int main(){


int opção;
float numero1, numero2, resultado;

    printf("Escolha uma operacao:\n");
    printf("1 - Adicao\n"); 
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");  
    printf("4 - Divisao\n\n");
    printf("Digite o numero da operacao desejada: ");
    scanf("%d", &opção);


    printf("Digite o primeiro numero: \n");
    scanf("%f", &numero1);
    printf("Digite o segundo numero: \n");
    scanf("%f", &numero2);

    switch (opção){

    case 1 :
    resultado = numero1 + numero2;
    printf("Resultado: %.2f\n", resultado);
    break;

    case 2:
    resultado = numero1 - numero2;
    printf("Resultado: %.2f\n", resultado);
    break;

    case 3:
    resultado = numero1 * numero2;
    printf("Resultado: %.2f\n", resultado);
    break;

    case 4:
    if (numero2 != 0) {
    resultado = numero1 / numero2;
    printf("Resultado: %.2f\n", resultado);
    } 
    else{
        printf("Erro: Divisao por zero nao e permitida.\n");    
    }
    break;

    default:
    printf("Opcao invalida. Por favor, escolha uma operacao valida.\n");

}


}