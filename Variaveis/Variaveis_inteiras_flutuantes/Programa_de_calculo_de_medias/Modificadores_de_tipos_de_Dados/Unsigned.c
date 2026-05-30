#include <stdio.h>

int main() {

int numeroSinal = 3000000000; // Este valor excede o limite de um int normal que é até -2.147.483.648 a 2.147.483.647
unsigned int numeroSemsinal = 3000000000; // Já unsigned int vai de 0 a 4.294.967.295

printf("Número com sinal: %d\n", numeroSinal);
printf("Número Sem sinal: %u\n", numeroSemsinal);

/*
char nome[50]; // Vai de -128 a 127 caracteres
unsigned char nome[50]; // Vai de 0 a 255 caracteres
*/

return 0;


}