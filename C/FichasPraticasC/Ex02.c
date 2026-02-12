#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declarar variáveis
    int n1, n2, n3;
    float media;

    printf("Introduza o primeiro numero: ");
    scanf("%d", &n1);

    printf("Introduza o segundo numero: ");
    scanf("%d", &n2);

    printf("Introduza o terceiro numero: ");
    scanf("%d", &n3);

    media = (n1 + n2 + n3) / 3.0;

    printf("A media e: %.2f\n", media);

    return 0;
}
