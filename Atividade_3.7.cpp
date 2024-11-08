//3.7)Dado uma sequência de entrada a1, a2, a3, ... , an, calcule e imprima a soma desta sequência, sendo
//n um valor inteiro digitado pelo usuário.
#include<stdio.h>
int main(){
	int i=1, n=0, somatoria=0;
	
	printf("Digite o limite da somatoria: ");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++){
		somatoria += i;
	}
	printf("%d\n", somatoria);
	
	return 0;
}
