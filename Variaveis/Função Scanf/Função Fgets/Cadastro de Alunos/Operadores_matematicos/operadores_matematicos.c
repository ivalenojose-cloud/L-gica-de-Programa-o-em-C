#include <stdio.h>

int main() {

    /*
    Soma (+)
    Subtração (-)
    Multiplicação (*)
    Divisão (/)
    */

    int numero1, numero2;
    int soma, subtracao, multiplicacao;
    float divisao;

    printf("Entre com o número 1: ");
    scanf("%d", &numero1);
    printf("Entre com o número 2: ");
    scanf("%d", &numero2);
    
    //Operação de Soma
    soma = numero1 + numero2;
    
    //Operação de Subtração
    subtracao = numero1 - numero2;

    //Operação de Multiplicação
    multiplicacao = numero1 * numero2;
 
    //Operação de Divisão
    divisao = numero1 /(float) numero2; // Inserir (float) para no terminal exibir os numeros decimais corretamente.

    printf("A soma é: %d\n", soma);
    printf("A subtração é: %d\n", subtracao);
    printf("A multiplicação é: %d\n", multiplicacao);
    printf("A divisão é: %.2f\n", divisao);

    return 0;
     

}