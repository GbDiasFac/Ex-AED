//7. Escreva um programa que encontre o maior n�mero em uma lista de n�meros fornecidos pelo usu�rio
//usando um loop "while".
#include <stdio.h>
int main() {
    int quantidade, numero, maior, contador = 1;

    printf("Digite a quantidade de n�meros que deseja inserir ou [0] para terminar: ");
    scanf("%d", &numero);
	
	maior=numero;
	
    while (numero!=0){
        printf("Digite mais um n�mero: ");
        scanf("%d", &numero);

        if (numero > maior){
            maior = numero;
        }
    }

    printf("O maior n�mero �: %d\n", maior);

    return 0;
}

