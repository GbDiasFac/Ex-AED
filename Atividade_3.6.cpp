//Fa�a um programa que leia um inteiro positivo n, e imprima as pot�ncias do n�mero de 0 at� n -
//�sima pot�ncia: exemplo para n = 3: 3^0 + 3^1 + 3^2 + 3^3 = 40
#include<stdio.h>
#include<math.h>

int main(){
	int i=0, n=0, somatoria=0, pot=0;
	
	printf("Digite o valor de n: ");;
	scanf("%d", &n);
	
	for(i=0;i<=n;i++){
		pot= pow(n, i);
		somatoria += pot;
	}
	printf("%d\n", somatoria);
	
	return 0;
}
