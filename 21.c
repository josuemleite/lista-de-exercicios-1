#include <stdio.h>
#include <locale.h>

int main(void){
	
	setlocale(LC_ALL,"Portuguese");
	
	int N, i, aux1 = 0, aux2 = 1, fibonacci = 1;
	
	printf("Termo da série de FIBONACCI: ");
	scanf("%d", &N);
	
	for(i = 1; i <= N; i++){
		printf("%d\n", fibonacci);
		fibonacci = aux1 + aux2;
		aux1 = aux2;
		aux2 = fibonacci;
	}
	
	return 0;
}
