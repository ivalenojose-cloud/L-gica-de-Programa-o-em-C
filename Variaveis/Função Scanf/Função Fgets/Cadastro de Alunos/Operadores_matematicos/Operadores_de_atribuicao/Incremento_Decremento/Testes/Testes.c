#include <stdio.h>
 
int main() {

float nota;

    printf("Digite sua nota: ");
    scanf("%f", &nota);

    printf("Parabéns voce esta aprovado!: %f\n", nota >= 6.0);
    printf("Infelizmente voce esta reprovado!: %f\n", nota <= 5.0 );

return 0;

}