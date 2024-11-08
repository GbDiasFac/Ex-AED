//1. Faça um programa que retorne a soma dos números ímpares 1 até n, sendo n fornecido pelo usuário
#include<stdio.h>
int main(){
	int n, i, soma=0;
	
	printf("Digite um numero limite: ");
	scanf("%d", &n);
	
	for (i=1;i<=n;i++){
		if (i% 2!=0){
			soma+=i;
		}
	}
	printf("Soma: %d", soma);
	
	return 0;
}

