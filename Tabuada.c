#include <stdio.h>

int main(){

int numero;

printf("Digite um numero para ver a tabuada: \n");
scanf("%d", &numero);

for(int i = 0; i <=10; i++){
    int multiplicação = numero * i;
    printf("%d x %d = %d\n", numero, i, multiplicação);
}



}