#include <stdio.h>

int main(){
	int num, numDiv;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	printf("Digite um numero para divisão: ");
	scanf("%d", &numDiv);


	int resto = num%numDiv;
	
	printf("O resto da divisão de %d por %d é: %d", num, numDiv, resto);
	
	
	return 0;
}
