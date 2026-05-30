#include <stdio.h>

int main() {

//Declarar as variaveis    
char produtoA[30] = "Sapatos";
char produtoB[30] = "Calças sociais";

unsigned int estoqueA = 1000;
unsigned int estoqueB = 2000;

float valorA = 10.50;
float valorB = 20.40;

unsigned estoqueMinimoA = 500;
unsigned estoqueMinimoB = 2500;

double valorTotalA;
double valorTotalB;

int resultadoA, resultadoB;

//Exibir o nome do programa
printf("\n******Programa de Controle de Estoque******\n");

//Exibir as informações do estoque
printf("Produto %s tem em estoque %u unidades o valor unitário é R$ %.2f\n", produtoA, estoqueA, valorA);
printf("Produto %s tem em estoque %u unidades o valor unitário é R$ %.2f\n", produtoB, estoqueB, valorB);

//Comparações com o valor minimo de estoque
resultadoA = estoqueA > estoqueMinimoA;
resultadoB = estoqueB > estoqueMinimoB;

printf("O produto %s tem estoque minimo %d\n", produtoA, resultadoA);
printf("O produto %s tem estoque minimo %d\n", produtoB, resultadoB);

//Comparações entre os valores totais dos produtos
printf("O valor total de A (R$ %.2f) é maior que o valor total de B (R$ %.2f)?: %d\n", estoqueA * valorA, estoqueB * valorB, (estoqueA * valorA) > (estoqueB * valorB));





}