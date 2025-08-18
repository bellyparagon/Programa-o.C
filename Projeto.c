#include <stdio.h>

int main (){ 
    float nota1, nota2, nota3;
    float
    média;
    printf("*** Programa de Cáculo de Média ***\n");
  
    printf("Digite sua primeira nota\n");
    scanf("%f", &nota1);

    printf("Digite sua segunda nota\n"); 
    scanf("%f", &nota2);

    printf("Digite sua terceira nota\n");
    scanf("%f", &nota3);

    média = (nota1 + nota2 + nota3) / 3;

    printf("A média é: %.2f", média);

    return 0;
}

