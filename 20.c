#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(void){
	
	setlocale(LC_ALL,"Portuguese");
	
	unsigned int num;
	int menor, count = 0;
	
	do{
		printf("Digite um número inteiro positivo (para sair, digite -1): ");
		scanf("%d", &num);
		
		if(num != -1 && count == 0)
			menor = num;
		else if(num != -1){
			if(num < menor)
				menor = num;
		}
		count++;
	}while(num != -1);
	
	printf("O menor número inteiro positivo digitado foi: %d", menor);
	
	printf("\n");
	
	return 0;
}
