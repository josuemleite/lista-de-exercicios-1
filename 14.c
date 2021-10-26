#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	float IMC, massa, altura;
	
	printf("Peso (kg): ");
	scanf("%f", &massa);
	printf("Altura (m): ");
	scanf("%f", &altura);
	
	IMC = massa / pow(altura,2);
	
	if(IMC < 20)
		printf("Situação: Abaixo do peso");
	if(IMC >= 20 && IMC < 25)
		printf("Situação: Peso Normal");
	if(IMC >= 25 && IMC < 30)
		printf("Situação: Sobre Peso");
	if(IMC >= 30 && IMC < 40)
		printf("Situação: Obeso");
	if(IMC >= 40)
		printf("Situação: Obeso Mórbido");
	
	printf("\n");
	
	return 0;
}
