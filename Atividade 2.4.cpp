//Crie um programa que peça ao usuário para adivinhar um número (por exemplo, 42) e continue
//pedindo até que o usuário acerte o número.
#include<stdio.h>
int main(){
	int n=0;
	
	printf("Adivinhe o numero: ");
	scanf("%d", &n);
	
	while(n!=42){
		printf("\nNumero errado, tente novamente:");
		scanf("%d", &n);
		if(n==42)
			printf("\nNa mosca!");
	}
	return 0;
}
