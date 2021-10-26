#include<stdio.h>
#include<locale.h>

int main(void){
	
	setlocale(LC_ALL,"Portuguese");
	
	int num, i, divisor = 0;
	
	printf("Digite um número: ");
	scanf("%d", &num);
	
	for(i = 1; i <= num; i++){
		if(num % i == 0){
			divisor++;
		}	
	}
	
	if(divisor == 1 || divisor == 2)
		printf("O número %d é primo!", num);
	else
		printf("O número %d não é primo!", num);
	
	printf("\n");
	
	return 0;
}
