#include <stdio.h>

int main(){
	float n1=0, n2=0, n3=0, n4=0, med=0;
	
	printf("Digite 4 notas para ser calculado a média: ");
	scanf("%f %f %f %f",&n1, &n2, &n3, &n4);
	
	med= (n1+n2+n3+n4)/4;
	
	printf("\nA média das notas é %.2f", med);

	return 0;
}
