//Escreva Escreva um programa que calcule a média de 5 números fornecidos pelo usuário usando um
//loop "while".
#include<stdio.h>
int main(){
	int i=1, n=0, soma=0;
	float media=0;
	
	while(i<=5){
		printf("Digite o %iº numero para o calculo: ", i);
		scanf("%i",&n);
		i++;
		soma+=n;
		}
		--i;
	media=soma/i;
	printf("Media = %.2f", media);
	
	return 0;
}
