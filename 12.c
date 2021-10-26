#include<stdio.h>
#include<locale.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int N;
	
	printf("Digite um número inteiro: ");
	scanf("%d", &N);
	
	if((N % 2) == 0)
		printf("O número %d é PAR", N);
	else
		printf("O número %d é ÍMPAR", N);
	
	printf("\n");
	
	return 0;
}
