#include <stdio.h>
#include <math.h>

int main(){
	
	double n=0;
	
	printf("Digite um numero para descobrir o resultado da raiz quadrada: ");
	scanf("%lf", &n);
	
	if (n>0){
		printf("%.2lf", sqrt(n));
	}
	else{
		printf("Nao e possivel realizar esse calculo com numeros negativos ou nulos.");
	}
	
	return 0;
}
