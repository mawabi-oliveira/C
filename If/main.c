#include <stdio.h>
#include <stdlib.h>


int main() {
	
	float m;
	
	
	printf("Insira a nota do aluno:");
	scanf("%f", &m);
	
	
	if(m >= 7.0){
		printf("\nAprovado(a)! Nota: %.1f", m);
	} else{
		printf("\nReprovado(a)! Nota: %.1f", m);
	}
	return 0;
}
