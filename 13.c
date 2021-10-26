#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

void flushstdin(){
	int c;
	while ((c = getchar()) != '\n' && c != EOF);
}

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	char time1[100], time2[100];
	int quantidadeGol1, quantidadeGol2;
	
	printf("Nome do time 1: ");
	scanf("%99[^\n]", time1);
	flushstdin();
	printf("Número de gols: ");
	scanf("%d", &quantidadeGol1);
	flushstdin();
	system("cls");
	printf("Nome do time 2: ");
	scanf("%99[^\n]", time2);
	flushstdin();
	printf("Número de gols: ");
	scanf("%d", &quantidadeGol2);
	flushstdin();
	system("cls");
	
	if(quantidadeGol1 > quantidadeGol2){
		printf("Pontuação do time \"%s\": 3\n", time1);
		printf("Pontuação do time \"%s\": 0", time2);
	}
	if(quantidadeGol1 < quantidadeGol2){
		printf("Pontuação do time \"%s\": 0\n", time1);
		printf("Pontuação do time \"%s\": 3", time2);
	}
	if(quantidadeGol1 == quantidadeGol2){
		printf("Pontuação do time \"%s\": 1\n", time1);
		printf("Pontuação do time \"%s\": 1", time2);
	}
	
	printf("\n");
	
	return 0;
}
