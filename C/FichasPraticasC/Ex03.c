#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero;

    printf("Introduza um numero inteiro: ");
    scanf("%d", &numero);

    printf("Numero introduzido: %d\n", numero);
    printf("Antecedente: %d\n", numero - 1);
    printf("Sucessor: %d\n", numero + 1);

    return 0;
}
