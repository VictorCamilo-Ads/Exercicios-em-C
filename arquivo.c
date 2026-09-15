#include <stdio.h>

int main(){

int x;
int y;

printf("Digite o primeiro numero: \n");
scanf("%d", &x);
printf("Voce digitou: %d\n", x);

printf("Digite o segundo numero: \n");
scanf("%d", &y);
printf("Voce digitou: %d\n", y);

int m = x * y;
printf("A multiplicacao de %d por %d é: %d\n", x,y,m);


}