#include <stdio.h>
#include <stdlib.h>
/*
    Aula: 0006
    Tema: Como criar variáveis e ler caracteres com a função scanf
    Link: https://www.youtube.com/watch?v=SfOnLfsZQbY&list=PLqJK4Oyr5WSjjEQCKkX6oXFORZX7ro3DA&index=7
    Data: 25.10.2024
*/

int main()
{
    char sexo = 'k';
    // %c -> tipo caractere
    printf("Valor da variável sexo: %c\n", sexo);

    printf("Digite seu sexo(f, F, m ou M): ");
    scanf("%c", &sexo);
    printf("Valor da variável sexo: %c\n", sexo);
    return 0;
}
