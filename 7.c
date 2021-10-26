#include<stdio.h>
#include<locale.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int quantidadeBolaVerde, quantidadeBolaAmarela, quantidadeBolaBranca, pontuacao;
	
	printf("Quantidade de bolas verde: ");
	scanf("%d", &quantidadeBolaVerde);
	printf("Quantidade de bolas amarela: ");
	scanf("%d", &quantidadeBolaAmarela);
	printf("Quantidade de bolas branca: ");
	scanf("%d", &quantidadeBolaBranca);
	
	pontuacao = ((quantidadeBolaVerde * 10) + (quantidadeBolaAmarela * 5) + (quantidadeBolaBranca * 3));
	
	printf("Pontuação final: %d", pontuacao);
	
	printf("\n");
	
	return 0;
}
