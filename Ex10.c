//10. Escreva um programa que imprima a seguinte sequ�ncia. Por exemplo, se o programa ler um valor 4
//fornecido pelo usu�rio, ele dever� exibir.
//1
//1 2
//1 2 3
//1 2 3 4
#include <stdio.h>
int main() {
    int n;

    printf("Digite um n�mero inteiro positivo: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}

