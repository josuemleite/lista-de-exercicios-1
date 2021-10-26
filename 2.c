#include<stdio.h>
#include<locale.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	float mbps, kbps;
	
	printf("Valor em Mbps: ");
	scanf("%f", &mbps);
	
	kbps = mbps * 1000;
	
	printf("%.2f Mbps equivale a %.2f Kbps", mbps, kbps);
	
	printf("\n");
	
	return 0;
}
