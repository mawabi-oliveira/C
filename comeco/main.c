#include <stdio.h>

int main() {
	int idade;
	float altura;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	printf("\nDigite sua altura: ");
	scanf("%f", &altura);
	
	printf("\nVoce tem %d anos e mede %.2f cm de altura\n", idade, altura);
	
	return 0;
}
