#include <stdio.h>
#include <locale.h>

int main(void){
	
	setlocale(LC_ALL,"Portuguese");
	
	int numUsuario, numAleatorio;
	
	srand(time(NULL)); // Mudar n�mero aleat�rio a cada momento
	numAleatorio = rand()%20; // Gerar n�mero aleat�rio de 0 a 19
	
	do{
		printf("Digite um n�mero de 0 a 19: ");
		scanf("%d", &numUsuario);
		if(numUsuario != numAleatorio)
			printf("Que pena, voc� errou!\n");
	}while(numUsuario != numAleatorio);
	
	printf("Parab�ns, voc� acertou!");
	
	printf("\n");
	
	return 0;
}
