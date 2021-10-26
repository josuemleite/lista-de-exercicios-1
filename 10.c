#include<stdio.h>
#include<locale.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	float valor1, valor2;
	char operador;
	
	printf("Primeiro valor: ");
	scanf("%f", &valor1);
	printf("Segundo valor: ");
	scanf("%f", &valor2);
	printf("Operador (+ - * /): ");
	scanf("%s", &operador);
	
	switch(operador){
		case '+':
			printf("%f", valor1 + valor2);
			break;
		case '-':
			printf("%f", valor1 - valor2);
			break;
		case '*':
			printf("%f", valor1 * valor2);
			break;
		case '/':
			printf("%f", valor1 / valor2);
			break;
		default:
			printf("Operador inválido!");
	}
	
	printf("\n");
	
	return 0;
}
