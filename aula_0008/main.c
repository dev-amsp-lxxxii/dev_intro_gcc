#include <stdio.h>
#include <stdlib.h>
/*
    Aula: 0008
    Tema: Como criar variáveis e ler caracteres com a função getc
    Link: https://www.youtube.com/watch?v=UXJeqLfUGDY&list=PLqJK4Oyr5WSjjEQCKkX6oXFORZX7ro3DA&index=9
    Data: 25.10.2024
*/

int main()
{
    char letra;
    printf("Digite um caracter: ");

    // pode ler de outras fontes o getc() Ex. ler de um arquivo fonte
    letra = getc(stdin); // stdin informa o tipo da fonte de entrada que neste caso é o teclado

    printf("Caracter lido: %c\n", letra);
    return 0;
}
