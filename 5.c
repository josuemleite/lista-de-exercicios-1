#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	float num, quadrado, raiz;
	
	printf("Digite um n�mero positivo: ");
	scanf("%f", &num);
	
	if(num > 0){
		quadrado = pow(num,2);
		printf("O n�mero %f ao quadrado � %f.\n", num, quadrado);
		raiz = sqrt(num);
		printf("A raiz quadrada do n�mero %f � %f.", num, raiz);
	}else{
		printf("N�mero inv�lido!");
	}
	
	printf("\n");
	
	return 0;
}
