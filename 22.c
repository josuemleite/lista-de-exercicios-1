#include <stdio.h>

int main (void){
	
	int N, i;
	float numerador[1000], denominador[1000], S, aux1, aux2 = 0;
	
	printf("N: ");
	scanf("%d", &N);
	
	aux1 = N;
	
	for(i = 1; i <= N; i++){
		numerador[i] = i;
	}
	
	for(i = 1; i <= N; i++){
		denominador[i] = aux1;
		aux1--;
	}
	
	for(i = 1; i <= N; i++){
		S = (numerador[i] / denominador[i]) + aux2;
		aux2 = S;
	}
	
	printf("S: %f\n", S);
	
	return 0;
}
