#include<stdio.h>
#include<locale.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int A, B, C;
	
	printf("");
	scanf("%d %d %d", &A, &B, &C);
	
	if(A > B && A > C && B > C)
		printf("%d", B);
	if(A > B && A > C && C > B)
		printf("%d", C);
	if(B > A && B > C && A > C)
		printf("%d", A);
	if(B > A && B > C && C > A)
		printf("%d", C);
	if(C > A && C > B && A > B)
		printf("%d", A);
	if(C > A && C > B && B > A)
		printf("%d", B);
	
	printf("\n");
	
	return 0;
}
