//1. Fa�a um programa que retorne a soma dos n�meros �mpares 1 at� n, sendo n fornecido pelo usu�rio
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

