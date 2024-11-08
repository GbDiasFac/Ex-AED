//7. Escreva um programa que encontre o maior número em uma lista de números fornecidos pelo usuário
//usando um loop "while".
#include <stdio.h>
int main() {
    int quantidade, numero, maior, contador = 1;

    printf("Digite a quantidade de números que deseja inserir ou [0] para terminar: ");
    scanf("%d", &numero);
	
	maior=numero;
	
    while (numero!=0){
        printf("Digite mais um número: ");
        scanf("%d", &numero);

        if (numero > maior){
            maior = numero;
        }
    }

    printf("O maior número é: %d\n", maior);

    return 0;
}

