#include<stdio.h>
#include<locale.h>

int main(void){
	
	setlocale(LC_ALL,"Portuguese");
	
	int num, i, fatorial;
	
	printf("Digite um n�mero: ");
	scanf("%d", &num);
	
	for(i = 1; i <= num; i++){
		fatorial = fatorial * i;
	}
	
	printf("Fatorial de %d �: %d", num, fatorial);
	
	printf("\n");
	
	return 0;
}
