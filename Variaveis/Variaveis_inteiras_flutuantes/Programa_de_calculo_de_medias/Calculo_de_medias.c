#include <stdio.h>

int main() {

//Declarar Variaveis
int nota1, nota2, nota3;
float media;

//Entrada de dados
printf("****Programa de Cálculo de Médias****\n");

printf("Digite a sua primeira nota: ");
scanf("%d", &nota1);

printf("Digite a sua segunda nota: ");
scanf("%d", &nota2);

printf("Digite a sua terceira nota: ");
scanf("%d", &nota3);

//Processamento de dados
media = (float)(nota1 + nota2 + nota3) / 3; //Conversão explícita para float

//Saída de dados
printf("A média é: %.1f\n", media);

return 0;


}