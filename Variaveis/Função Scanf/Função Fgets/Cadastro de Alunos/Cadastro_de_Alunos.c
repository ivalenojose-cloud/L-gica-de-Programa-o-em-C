#include <stdio.h>

int main() {

int idade, matricula;
float altura;
char nome[100];

printf("Digite sua idade: \n");
scanf("%d", &idade);

printf("Digite sua altura: \n");
scanf("%f", &altura);

getchar(); // consome o '\n' deixado pelo scanf

printf("Digite seu nome: \n");
fgets(nome, sizeof(nome), stdin);

printf("Digite sua matricula: \n");
scanf("%d", &matricula);

printf("Nome do aluno: %s\n - Matricula: %d\n - Idade: %d\n - Altura: %f", nome, matricula, idade, altura);

return 0;


}