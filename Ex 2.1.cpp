#include <stdio.h>

int main(){
	int n1, n2;
	
	printf("Digite dois numeros: ");
	scanf("%i %i", &n1, &n2);
	
	if (n1>n2){
		printf("O numero %i e maior", n1);
	}else{
		printf("O numero %i e maior", n2);
	}
	
	return 0;
}
