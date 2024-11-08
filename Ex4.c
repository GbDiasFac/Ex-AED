//4. Escreva um programa que solicite ao usuário um número e imprima os números de 1 até o número
//inserido exceto os números múltiplos de 3, usando um laço de repetição.
#include<stdio.h>
int main(){
	int n, i;
	
	printf("Digite um numero limite: ");
	scanf("%d", &n);
	
	for (i=1;i<=n;i++){
		if (i% 3!=0){
			printf("%d ", i);
		}
	}
	return 0;
}

