#include <stdio.h>

int main(void){
	
	int N, S, i, aux, menor = 999999;
	
	scanf("%d%d", &N, &S);
	
	for(i = 0; i < N; i++){
		scanf("%d", &aux);
		S = S + aux;
		if(S < menor)
			menor = S;
	}
	
	printf("%d", menor);
	
	printf("\n");
	
	return 0;
}
