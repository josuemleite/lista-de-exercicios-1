#include <stdio.h>
#include <locale.h>

int main(void){
	
	setlocale(LC_ALL,"Portuguese");
	
	int num, mediaPar = 0, mediaImpar = 0, auxPar = 0, auxImpar = 0;
	char resposta;
	
	do{
		printf("Digite um n�mero: ");
		scanf("%d", &num);
		if(num % 2 == 0){
			mediaPar = mediaPar + num;
			auxPar++; 
		} else {
			mediaImpar = mediaImpar + num;
			auxImpar++;
		}
		printf("Desejas continuar (S/n)? ");
		scanf("%s", &resposta);
	}while(resposta != 'n' && resposta != 'N');
	
	if(auxPar != 0)
		mediaPar = mediaPar / auxPar;
	
	printf("M�dia dos %d n�meros pares digitados: %d\n", auxPar, mediaPar);
	
	if(auxImpar != 0)
		mediaImpar = mediaImpar / auxImpar;
	
	printf("M�dia dos %d n�meros �mpares digitados: %d", auxImpar, mediaImpar);
	
	printf("\n");
	
	return 0;
}
