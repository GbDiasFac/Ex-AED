//Crie um programa que pe�a ao usu�rio para adivinhar um n�mero (por exemplo, 42) e continue
//pedindo at� que o usu�rio acerte o n�mero.
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
