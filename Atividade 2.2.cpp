//Escreva um programa que solicite ao usu�rio um n�mero e imprima os n�meros de 1 at� 
//o n�mero inserido usando um loop "WHILE"
#include<stdio.h>
int main(){
	int limite=0, count=1;
	
	printf("Digite um limite de contagem: ");
	scanf("%d", &limite);
	
	while(count<=limite){
		printf("%i, ", count);
		count++;
	}
	if (limite==0)
		printf("Nao quer me ver contar, ta bom");
		
	return 0;
}
