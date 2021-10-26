#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	float num, quadrado, raiz;
	
	printf("Digite um número positivo: ");
	scanf("%f", &num);
	
	if(num > 0){
		quadrado = pow(num,2);
		printf("O número %f ao quadrado é %f.\n", num, quadrado);
		raiz = sqrt(num);
		printf("A raiz quadrada do número %f é %f.", num, raiz);
	}else{
		printf("Número inválido!");
	}
	
	printf("\n");
	
	return 0;
}
