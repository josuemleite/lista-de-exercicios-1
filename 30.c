#include <stdio.h>

int main(void){
	
	int N, P, i, X, Y, aux = 0;
	
	scanf("%d%d", &N, &P);
	
	for(i = 0; i < N; i++){
		scanf("%d%d", &X, &Y);
		if(X + Y >= P)
			aux++;
	}
	
	printf("%d", aux);
	
	printf("\n");
	
	return 0;
}
