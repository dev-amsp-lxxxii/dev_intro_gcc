#include <stdio.h>
#include <stdlib.h>
/*
    Aula: 0011
    Tema: Como ler sexo, idade, peso e altura do usuário
    Link: https://www.youtube.com/watch?v=o-LV7gAQmjE&list=PLqJK4Oyr5WSjjEQCKkX6oXFORZX7ro3DA&index=12
    Data: 28.10.2024
*/

int main()
{
    char sexo;
    int idade;
    float peso, altura;

    printf("Digite sexo(f, F, m ou M), idade, peso e altura:\n");
    scanf("%c%d%f%f", &sexo, &idade, &peso, &altura);

    printf("\nSexo: %c\nIdade: %d\nPeso: %.1f\nAltura: %.2f\n", sexo, idade, peso, altura);

    return 0;
}
