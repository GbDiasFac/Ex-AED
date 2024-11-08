//Crie um programa que calcule a soma dos números pares de 1 100 usando loop "WHILE".
#include<stdio.h>
int main(){
	int n=1, soma=0;
	
	while(n<=100){
		if(n%2==0)
			soma += n;			
			printf("%d, ", n);
			n++;
	}
	printf("\nSoma = %d", soma);
	
	return 0;
}
