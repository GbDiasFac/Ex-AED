#include <stdio.h>

int main(){
	float cot=0, real=0;
	
	printf("Qual a cotacao do dolar hoje?");
	scanf("%f",&cot);
	
	printf("\nQuantos reais voce quer converter em dolares hoje?");
	scanf("%f", &real);
	
	cot=real/cot;
	
	printf("O total em dolares, sem taxa, e de: $%.2f", cot);

	return 0;
}
