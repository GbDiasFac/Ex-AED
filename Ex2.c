//2. Fa�a um programa que imprima o menor entre dois n�meros. Se os n�meros forem iguais, imprima
//�Valores iguais�.
#include <stdio.h>

int main() {
    int n1=0, n2=0;

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &n1);

    printf("Digite o segundo n�mero: ");
    scanf("%d", &n2);

    if (n1 < n2){
        printf("O menor n�mero �: %d\n", n1);
    }else if (n2 < n1){
        printf("O menor n�mero �: %d\n", n2);
    }else{
        printf("Valores iguais\n");
    }

    return 0;
}

