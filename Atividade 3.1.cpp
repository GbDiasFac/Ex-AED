//Escreva um programa que solicite ao usuário um número e imprima os números pares de 2 até o
//número inserido usando um loop "for".
#include <stdio.h>
int main(){
	int n, cont;
	
	printf("Digite um numero limite para contagem em pares: ");
	scanf("%d", &n);
	
	for(cont=0;cont<=n;cont++){
		if (cont%2==0){
			printf("%d\n", cont);
			cont++;
		}
	}	
	return 0;
}
