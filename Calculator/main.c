#include <stdio.h>

int main () {
    
 
    int num1, num2;
    int escolha_num;
    int recalc;
    
    do {
    
    printf("Escolha o primeiro numero para operacao: ");
    scanf("%d", &num1);
    printf("\nEscolha o segundo numero para operacao: ");
    scanf("%d", &num2);
        
    printf("\nEscolha o tipo de operacao: Sendo 1 para multiplicacao, 2 divisao, 3 subtracao ou 4 adicao: ");    
    scanf("%d", &escolha_num);
        
    int sub = num1 - num2;
    int mult = num1 * num2;
    int adic = num1 + num2;
        
    if (escolha_num == 1) {
        printf("\nO resultado da multiplicacao eh: %d", mult);
    } 
    else if (escolha_num == 2) {
    if (num2 == 0) {
        printf("\nErro: Nao eh possivel dividir por zero!");
    } else {
    	int div = num1 / num2;
        printf("\nO resultado da divisao eh: %d", div);
    }
}
    else if (escolha_num == 3) {
        printf("\nO resultado da subtracao eh: %d", sub);
    } 
    else if (escolha_num == 4) {
        printf("\nO resultado da adicao eh: %d", adic);
    } 
    else {
        printf("\nOpcao invalida!");
    }
    
    printf("\nDeseja fazer outra operacao? (1 para Sim, 0 para Nao): ");
    scanf("%d", &recalc);

} while (recalc == 1);
        
    return 0;
}
