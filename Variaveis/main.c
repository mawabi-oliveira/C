#include <stdio.h>

int main() {
    int A, B, soma, subtr, mult;
    float divis; 

    printf("Digite o primeiro valor: ");
    scanf("%d", &A);
    printf("Digite o segundo valor: ");
    scanf("%d", &B);

    soma = A + B;
    subtr = A - B;
    mult = A * B;

    printf("\nResultados:\n");
    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", subtr);
    printf("Multiplicacao: %d\n", mult);


    if (B != 0) {
        
        divis = (float)A / B; 
        printf("Divisao: %.2f\n", divis);
    } else {
        printf("Divisao: Erro (nao e possivel dividir por zero)\n");
    }

    return 0;
}
