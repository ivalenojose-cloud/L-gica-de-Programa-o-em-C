#include <stdio.h>

int main() {

int idade;
float altura;
char nome[25];
char opção;

printf("Digite sua idade: ");
scanf("%d", &idade);
printf("Sua idade é: %d\n", idade);

printf("Digite sua altura: ");
scanf("%f", &altura);
printf("A altura é: %f\n", altura);

printf("Digite seu nome: ");
scanf("%s", &nome);
printf("Seu nome é: %s\n", nome);

printf("Opcção é: ");
scanf(" %c", &opção);
printf("A opção é: %c\n", opção);

return 0;

}