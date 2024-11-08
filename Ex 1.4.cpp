#include <stdio.h>

int main(){
	float n1=0.0, quad=0.0;
	printf("DIgite um numero real para saber seu resultado ao quadrado: ");
	scanf("%f", &n1);
	quad=n1*n1;
	printf("O resultado de %.2f² é igual a %.2f", n1, quad);
	
	return 0;
}
