#include <stdio.h>

int main(){
	
	int base;
	float altura;
	
	printf("Dê-me o valor da base: ");
	scanf("%d", &base);
	printf("\nDê-me o valor da altura: ");
	scanf("%f", &altura);
	
	int area = base * altura;
	
	printf("\nO valor da area é %d\n", area);
	
	
	
	return 0;
}
