#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int d;
	
	printf("Insira um valor de 1 a 5:");
	scanf("%d", &d);
	
	switch(d){
		case 1:
			printf("\nSegunda-Feira");
			break;
		case 2:
			printf("\nTerça-Feira");
			break;
		case 3:
			printf("\nQuarta-Feira");
			break;
		default:
			printf("\nValor Inválido");
			break;
			
			
	}
	
	return 0;
}
