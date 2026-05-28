#include <stdio.h>

int main() {

//Variaveis
float base, altura, area;

//Entrada de dados
printf("Digite a base: ");
scanf("%f", &base);

printf("Digite a altura: ");
scanf("%f", &altura);

//Processamento
area = base * altura;

//Saida de dados
printf("A area do retangulo é: %.2f\n", area);

return 0;

}