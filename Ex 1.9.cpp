#include <stdio.h>
#include <math.h>

int main(){
	float valor=0;
	
	print("Qual o valor da compra: R$");
	scanf("%f", &valor);
	
	float desc10=valor*0.90, parc=valor/3, com_a_vist=desc10*0.05, com_parc=valor*0.05;
	
	printf("\nValor com desconto: R$%.2f", desc10);
	printf("\nValor em ate 3x sem juros: R$%.2f", parc);
	printf("\nComissao do vendedor para compras com desconto: R$%.2f", com_a_vist);
	printf("\nComissao do vendedor para compras parceladas: R$%.2f", com_parc);
	
	return 0;
}
