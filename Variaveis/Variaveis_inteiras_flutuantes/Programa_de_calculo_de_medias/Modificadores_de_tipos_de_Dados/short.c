#include <stdio.h>

int main() {

    short int numeroPequeno = 32767; //Valor máximo de short int
    printf("Número pequeno atualizado (short int): %d\n", numeroPequeno);

    numeroPequeno = 32768; //Valor maior que o máximo de short int
    printf("Número atualizado: %d\n", numeroPequeno);

    printf("\n***Tamanho das variaveis***\n");
    printf("Short int: %lu Bytes - long int: %lu Bytes\n", sizeof(int), sizeof(short));
    printf("Float: %lu Bytes - Double: %lu Bytes - long double: %lu Bytes\n", sizeof(float), sizeof(double), sizeof(long double));

    return 0;


}