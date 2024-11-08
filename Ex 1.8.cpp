#include <stdio.h>

int main(){
	float sal=0;
	
	printf("Qual seu salario base: ");
	scanf("%f", &sal);
	float grat= sal * 1.05;
	
	printf("%.2f", grat);
	
	return 0;
}
