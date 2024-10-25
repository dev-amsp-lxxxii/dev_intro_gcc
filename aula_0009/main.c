#include <stdio.h>
#include <stdlib.h>
/*
    Aula: 0009
    Tema: Como criar variáveis e ler caracteres com a função fgetc
    Link: https://www.youtube.com/watch?v=0S7I54CvcpE&list=PLqJK4Oyr5WSjjEQCKkX6oXFORZX7ro3DA&index=10
    Data: 25.10.2024
*/

int main()
{
    char letra;
    printf("Digite um caracter: ");
    // a letra f vem de file(arquivo)
    // fgetc é utilizado geralmente para leitura de arquivos/file
    letra = fgetc(stdin); // mas neste caso estamos informando a entrada padrão que é o teclado
    printf("Caracter lido: %c\n", letra);
    return 0;
}
