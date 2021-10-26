#include <stdio.h>

int main(void){
	
	int idade, soma = 0, contador = 0;
	float media;
	
	do{
		scanf("%d", &idade);
		if(idade >= 0){
			soma = soma + idade;
			contador++;	
		}
	}while(idade >= 0);
	
	media = (float) soma / contador;
	
	printf("%.2f", media);
	
	printf("\n");
	
	return 0;
}
