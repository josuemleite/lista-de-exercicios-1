#include<stdio.h>
#include<locale.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	float custoFabrica, custoConsumidor;
	
	printf("Custo de fábrica do carro: R$");
	scanf("%f", &custoFabrica);
	
	custoConsumidor = (custoFabrica + (custoFabrica * 0.25) + (custoFabrica * 0.42));
	
	printf("Custo ao consumidor: R$%f", custoConsumidor);
	
	printf("\n");
	
	return 0;
}
