//Crie um programa que calcule a soma dos d�gitos de um n�mero inteiro fornecido pelo usu�rio
//usando um loop "while".
#include<stdio.h>
int main(){
	int n, soma;
	
	printf("Digite numeros inteiros para somar ou digite [0] para parar: ");
	scanf("%d", &n);
	soma += n;
	
	while(n!=0){
		printf("Digite mais um numero ou [0] para parar: ");
		scanf("%d", &n);
		soma += n;}
	
	
	printf("A somatoria e de: %d", soma);
	
	return 0;
}
