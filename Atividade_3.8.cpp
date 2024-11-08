//3.8)Faça um programa que leia um inteiro n e calcule e imprima o Fatorial de n.
#include<stdio.h>
int main(){
    int  n, fatoria;

    printf("Digitar um número para calcular a fatorial: ");
    scanf("%d", &n);
	
    for(fatorial= 1;n>1;n=n-1){
        fatorial = fatorial* n ;
        printf("%d\n", n);
	}
    printf("%d", fatorial);
	
	return 0;
}
