//5. Crie um programa que calcule a soma dos n�meros pares de 2 at� n, sendo n um valor fornecido pelo
//usu�rio usando um loop "for ou while".
#include<stdio.h>
int main(){
	int n, i, soma=0;
	
	printf("Digite um numero limite: ");
	scanf("%d", &n);
	
	for (i=2;i<=n;i++){
		if (i% 2==0){
			soma+=i;
		}
	}
	printf("Soma: %d", soma);
	
	return 0;
}

