#include <stdio.h>
#include <locale.h>

int main(void){
	
	setlocale(LC_ALL,"Portuguese");
	
	int numUsuario, numAleatorio;
	
	srand(time(NULL)); // Mudar número aleatório a cada momento
	numAleatorio = rand()%20; // Gerar número aleatório de 0 a 19
	
	do{
		printf("Digite um número de 0 a 19: ");
		scanf("%d", &numUsuario);
		if(numUsuario != numAleatorio)
			printf("Que pena, você errou!\n");
	}while(numUsuario != numAleatorio);
	
	printf("Parabéns, você acertou!");
	
	printf("\n");
	
	return 0;
}
