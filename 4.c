#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	float raio, altura, area;
	
	printf("Raio do cilindro: ");
	scanf("%f", &raio);
	
	printf("Altura do cilindro: ");
	scanf("%f", &altura);
	
	area = 2 * atan(1)*4 * raio * (raio + altura);
	
	printf("Área do cilindro: %.2f", area);
	
	printf("\n");
	
	return 0;
}
