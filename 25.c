#include <stdio.h>
#include <locale.h>

int main(void){
	
	setlocale(LC_ALL,"Portuguese");
	
	int contador = 0;
	float massa;
	
	printf("Digite o valor da massa do material (em gramas): ");
	scanf("%f", &massa);
	
	do{
		Sleep(20000);
		massa = 0.87 * massa;
		printf("Massa do material: %f\n", massa);
		contador = contador + 20;
	}while(massa >= 1.45);
	
	printf("Tempo necessário: %ds", contador);
	
	printf("\n");
	
	return 0;
}
