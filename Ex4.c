//4. Escreva um programa que solicite ao usu�rio um n�mero e imprima os n�meros de 1 at� o n�mero
//inserido exceto os n�meros m�ltiplos de 3, usando um la�o de repeti��o.
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

