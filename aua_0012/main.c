#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo;
    int idade;
    float peso, altura;

    // Forçando erros no caso do scanf tem que manter a ordem de escrita com a de leitura
    // buffer do teclado => 45\n56.2\n1.63\n .. não aparece o sexo, pois armazena como carater o \n
    printf("Digite idade, peso, altura e o sexo(f, F, m ou M):\n");

    // E para resolver isso da espeço entre as referências
    scanf("%d%f%f %c", &idade, &altura, &peso, &sexo);

    printf("\nIdade: %d\nPeso: %.1f\nAltura: %.2f\nSexo: %c\n", idade, peso, altura, sexo);

    return 0;
}
