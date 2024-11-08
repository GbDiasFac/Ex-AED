#include <stdio.h>

int main(){
	int n=0, ant=0, suc=0;
	printf("Digite um numero: ");
	scanf("%i", &n);
	
	ant=n-1;
	suc=n+1;
	
	printf("\nO antecessor de %ie %ie seu sucessor e %i", n, ant, suc);
	
	return 0;
}
