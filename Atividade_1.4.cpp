//1.4)Faça um programa que retorne o resultado do somatório abaixo, sendo n o parâmetro de entrada.
//(5*i^2+2*i+8)
#include<stdio.h>
int main(){
	int i=1, n=0, somatoria=0;
	
	printf("Digite o limite da somatoria: ");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++){
		somatoria += 5*(i*i)+2*i+8;
	}
	printf("%d\n", somatoria);
	
	return 0;
}
