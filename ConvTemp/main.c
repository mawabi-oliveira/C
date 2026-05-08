#include <stdio.h>

int main(){
	float c;
	
	printf("Digite uma temperatura em graus Celsius: ");
	scanf("%f", &c);
	
	float f = (c * 1.8)+32;
	printf("A temperatura em Celsius é %f e convertida em Fahrenheit é %f", c, f);	
	return 0;
}
