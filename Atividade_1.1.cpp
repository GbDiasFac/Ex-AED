//1.1 Faça um programa que receba os três lados de um triângulo e faça as seguintes atividades: 
//retornar se os três lados realmente formam um triângulo e que triângulo é este.
#include <stdio.h>
int main(){
	int l1=0, l2=0, l3=0;
	
	printf("Digite ""em cm"" tres lados de um triangulo: ");
	scanf("%i %i %i", &l1, &l2, &l3);
	
	if(l1<l2+l3 && l2<l1+l3 && l3<l1+l2)
		printf("\nE possivel formar um triangulo");
		if (l1 == l2 && l2 != l3)
			printf("\nEle e Isoceles");
		else if (l1 == l2 && l2 == l3)
			printf("\nEle e Equilatero");
		else if (l1 != l2 && l2 != l3 && l3!= l1)
			printf("Ele e Equilatero");
	else
		 printf("Nao e possivel formar um triangulo");
	
	
	
	return 0;
}
