#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float n=0;
	printf("Digite um n�mero real: ") ;
	scanf("%f", &n);
	printf("O n�mero digitado foi: %.2f ", n);

	return 0;
}
