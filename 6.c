#include<stdio.h>
#include<locale.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	float num1, num2;
	
	printf("Digite um n�mero: ");
	scanf("%f", &num1);
	printf("Digite outro n�mero: ");
	scanf("%f", &num2);
	
	if(num1 > num2)
		printf("O maior n�mero digitado �: %f", num1);
	if(num1 < num2)
		printf("O maior n�mero digitado �: %f", num2);
	if(num1 == num2)
		printf("Os n�meros digitados s�o iguais!");
		
	printf("\n");
	
	return 0;
}
