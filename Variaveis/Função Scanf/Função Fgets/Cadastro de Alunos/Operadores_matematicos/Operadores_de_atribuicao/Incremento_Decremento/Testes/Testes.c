#include <stdio.h>

int main() {

float numero1, numero2;
float divisao;

printf("Digite o numero 1: ");
scanf("%f", &numero1);

printf("Digite o numero 2: ");
scanf("%f", &numero2);

divisao = numero1 / numero2;

printf("O resultado da divisão é: %f\n", divisao);

return 0;


}