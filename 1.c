#include<stdio.h>
#include<locale.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	float cotacao, real, conversao;
	
	printf("Cotação do dólar (US$): ");
	scanf("%f", &cotacao);
	
	printf("Quantidade de reais (R$): ");
	scanf("%f", &real);

	conversao = cotacao * real;	
	
	printf("Valor da conversão em dólar: US$%.2f", conversao);
	
	printf("\n");
	
	return 0;
}
