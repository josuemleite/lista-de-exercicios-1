#include<stdio.h>
#include<locale.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	
	printf("Digite tua idade: ");
	scanf("%d", &idade);
	
	if(idade < 16)
		printf("N�o eleitor!");
	if(idade >= 18 && idade < 65)
		printf("Eleitor obrigat�rio!");
	if(idade >= 16 && idade < 18 || idade >= 65)
		printf("Eleitor facultativo!");
	
	printf("\n");
	
	return 0;
}
