#include<stdio.h>
#include<locale.h>

int main(void){
	
	setlocale(LC_ALL,"Portuguese");
	
	int num, i, divisor = 0;
	
	printf("Digite um n�mero: ");
	scanf("%d", &num);
	
	for(i = 1; i <= num; i++){
		if(num % i == 0){
			divisor++;
		}	
	}
	
	if(divisor == 1 || divisor == 2)
		printf("O n�mero %d � primo!", num);
	else
		printf("O n�mero %d n�o � primo!", num);
	
	printf("\n");
	
	return 0;
}
