#include<stdio.h>
#include<locale.h>

int main(void){
	
	setlocale(LC_ALL,"Portuguese");
	
	float X, Y;
	
	printf("");
	scanf("%f %f", &X, &Y);
	
	if(X >= 0 && X <= 432 && Y >= 0 && Y <= 468)
		printf("dentro");
	else
		printf("fora");
	
	printf("\n");
	
	return 0;
}
