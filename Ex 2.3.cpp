#include <stdio.h>
#include <math.h>

int main(){
	
	double n=0;

	printf("Digite um numero:");
	scanf("%lf", &n);

	if (n>0){
		printf("%.2lf", sqrt(n));	
	}
	else{
		float quad=n*n;
		printf("%.2f", quad);
	}
		
	return 0;
}

