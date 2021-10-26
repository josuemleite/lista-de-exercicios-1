#include<stdio.h>
#include<locale.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	
	printf("Digite tua idade: ");
	scanf("%d", &idade);
	
	if(idade < 16)
		printf("Não eleitor!");
	if(idade >= 18 && idade < 65)
		printf("Eleitor obrigatório!");
	if(idade >= 16 && idade < 18 || idade >= 65)
		printf("Eleitor facultativo!");
	
	printf("\n");
	
	return 0;
}
