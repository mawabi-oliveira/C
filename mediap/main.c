#include <stdio.h>

int main(){
	float nota1, nota2;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	
	printf("\nDigite a segunda nota: ");
	scanf("%f", &nota2);
	
	float peso1 = nota1*3;
	float peso2 = nota2*7;
	float mediaFinal = (peso1+peso2)/10;
	
	printf("A nota final do aluno é: %.2f", mediaFinal);
	return 0;
}
