#include<stdio.h>
#include<locale.h>

int main(void){
	
	setlocale(LC_ALL,"Portuguese");
	
	int num, i;
	
	printf("Digite um número: ");
	scanf("%d", &num);
	
	printf("========== TABUADA DE %d ==========\n", num);
	
	for(i = 1; i <= 10; i++){
		printf("%d * %d = %d\n", num, i, num * i);
	}
	
	return 0;
}
