#include<stdio.h>
#include<locale.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	float num1, num2;
	
	printf("Digite um número: ");
	scanf("%f", &num1);
	printf("Digite outro número: ");
	scanf("%f", &num2);
	
	if(num1 > num2)
		printf("O maior número digitado é: %f", num1);
	if(num1 < num2)
		printf("O maior número digitado é: %f", num2);
	if(num1 == num2)
		printf("Os números digitados são iguais!");
		
	printf("\n");
	
	return 0;
}
