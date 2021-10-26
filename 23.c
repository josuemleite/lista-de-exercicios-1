#include <stdio.h>
#include <locale.h>

int main(void){
	
	setlocale(LC_ALL,"Portuguese");
	
	int base, expoente, i;
	float potencia = 1;
	
	printf("Base: ");
	scanf("%d", &base);
	
	printf("Expoente: ");
	scanf("%d", &expoente);
	
	if(expoente < 0){
		expoente = expoente * -1;
		for(i = 1; i <= expoente; i++){
			potencia = potencia * base;
		}
		potencia = 1 / potencia;
		printf("Pot�ncia: %f", potencia);
		return;
	}
	
	if(expoente == 0){
		printf("Pot�ncia: 1\n");
	}
	
	if(expoente > 0){
		for(i = 1; i <= expoente; i++){
			potencia = potencia * base;
		}
		printf("Pot�ncia: %f", potencia);
	}
	
	return 0;
}
