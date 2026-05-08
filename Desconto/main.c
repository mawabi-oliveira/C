#include <stdio.h>

int main(){
	
	float valorProduto;
	
	printf("Digite o valor do produto: ");
	scanf("%f", &valorProduto);
	
	float desconto = valorProduto * 0.10;
	float novoValor = valorProduto * 0.90;
	
	printf("\nEsse é o valor do produto %.2f", valorProduto);
	printf("\nEsse é o valor do desconto %.2f", desconto);
	printf("\nEsse é o novo valor com desconto %.2f", novoValor);

	return 0;
}
