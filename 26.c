#include <stdio.h>
#include <locale.h>

int main(void){
	
	setlocale(LC_ALL,"Portuguese");
	
	float idadeFreitas = 1.50, idadeRusso = 1.40;
	int anoInicial = 2021, anoFinal =  2021;
	
	do{
		anoFinal++;
		printf("--- Ano: %d ---\n", anoFinal);
		idadeFreitas = idadeFreitas + 0.01;
		printf("Freitas: %f\n", idadeFreitas);
		idadeRusso = idadeRusso + 0.02;
		printf("Russo: %f\n", idadeRusso);
	}while(idadeFreitas >= idadeRusso);
	
	printf("Anos necessários para Russo ser maior que Freitas: %d", anoFinal - anoInicial);
	
	printf("\n");
	
	return 0;
}
