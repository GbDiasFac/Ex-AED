//1.4)Fa�a um programa que retorne o resultado do somat�rio abaixo, sendo n o par�metro de entrada.
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
