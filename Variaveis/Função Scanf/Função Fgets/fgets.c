#include <stdio.h>

int main() {

char nome[100]; // Espaço suficiente para escrever o nome completo
 
printf("Digit seu nome completo: ");
fgets(nome, sizeof(nome), stdin);
printf("Voce digitou: %s", nome);

return 0;

}