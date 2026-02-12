#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2, produto;

    // Ler números
    printf("Insira o 1 numero: ");
    scanf("%d",&num1);

    printf("Insira o 2 numero: ");
    scanf("%d",&num2);

    // Calcular produto
    produto=num1*num2;

    // Apresentar na consola o resultado
    printf("Produto de %d com %d: %d",num1,num2,produto);

    return 0;
}
