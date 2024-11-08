#include <stdio.h>

int main(){
	int n1=0, n2=0, n3=0, soma=0;
	printf("Digite 3 numeros para saber a soma deles:");
	scanf("%i %i %i", &n1, &n2, &n3);
	soma=n1+n2+n3;
	printf("A soma dos numeros %i, %i e %i é igual a %i", n1, n2, n3, soma);
	
	return 0;
}
