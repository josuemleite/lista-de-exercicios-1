#include<stdio.h>
#include<locale.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int N;
	
	printf("Digite um n�mero inteiro: ");
	scanf("%d", &N);
	
	if((N % 2) == 0)
		printf("O n�mero %d � PAR", N);
	else
		printf("O n�mero %d � �MPAR", N);
	
	printf("\n");
	
	return 0;
}
