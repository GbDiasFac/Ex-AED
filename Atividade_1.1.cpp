//1.1 Fa�a um programa que receba os tr�s lados de um tri�ngulo e fa�a as seguintes atividades: 
//retornar se os tr�s lados realmente formam um tri�ngulo e que tri�ngulo � este.
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
