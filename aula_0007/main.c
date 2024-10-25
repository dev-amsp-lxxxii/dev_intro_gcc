#include <stdio.h>
#include <stdlib.h>
/*
    Aula: 0007
    Tema: Como criar variáveis e ler caracteres com a função getchar
    Link: https://www.youtube.com/watch?v=NgffM1_fdHo&list=PLqJK4Oyr5WSjjEQCKkX6oXFORZX7ro3DA&index=8
    Data: 25.10.2024
*/

int main()
{
    char letra;

    printf("Digite uma letra: ");

    letra = getchar(); // ira pegar o caracter no buffer do teclado e armazenar

    printf("Caracter lido: %c", letra);
    return 0;
}
