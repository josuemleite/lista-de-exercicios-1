#include<stdio.h>
#include<locale.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	float N, tempo, velocidade, distancia, litrosUsados;
	
	printf("Litros que o autom�vel faz por quil�metro (l/km): ");
	scanf("%f", &N);
	printf("Tempo gasto em viagem (em hora): ");
	scanf("%f", &tempo);
	printf("Velocidade m�dia da viagem (em km/h): ");
	scanf("%f", &velocidade);
	
	distancia = tempo * velocidade;
	litrosUsados = distancia / N;
	
	printf("Quantidade de litros de combust�vel gastos: %f", litrosUsados);
	
	printf("\n");
	
	return 0;
}
