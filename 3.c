#include<stdio.h>
#include<locale.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int valor;
	
	printf("Digite um valor natural entre 1 e 7, inclusive: ");
	scanf("%d", &valor);
	
	switch(valor){
		case 1:
			printf("Domingo");
			break;
		case 2:
			printf("Segunda-feira");
			break;
		case 3:
			printf("Terça-feira");
			break;
		case 4:
			printf("Quarta-feira");
			break;
		case 5:
			printf("Quinta-feira");
			break;
		case 6:
			printf("Sexta-feira");
			break;
		case 7:
			printf("Sábado");
			break;
		default:
			printf("Valor inválido!");
	}
	
	printf("\n");
	
	return 0;
}
