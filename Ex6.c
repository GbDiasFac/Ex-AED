//6. Escreva um programa que calcule a m�dia de 4 notas de um aluno, imprima se o aluno foi aprovado,
//caso m�dia maior ou igual a 6, imprima reprovado se m�dia menor que 6.
#include <stdio.h>
int main(){
    float nota1, nota2, nota3, nota4, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    printf("Digite a quarta nota: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4.0;

    if (media >= 6.0){
        printf("A m�dia � %.2f. Aluno aprovado.\n", media);
    }else{
        printf("A m�dia � %.2f. Aluno reprovado.\n", media);
    }

    return 0;
}

