#include <stdio.h>
#include <stdlib.h>
/*
    Aula: 0002
    Tema: Imprimindo informações com a função printf e caracter nova linha
    Link: https://www.youtube.com/watch?v=GB9acaxqM_k&list=PLqJK4Oyr5WSjjEQCKkX6oXFORZX7ro3DA&index=3
    Data: 24.10.2024
*/

    // Caractere de escape para saltar uma linha -> \n
    // printf() é uma função de saída
    // A função printf retorna um valor int
int main()
{
    printf("\nOlá, Seja bem vindo!\n");
    printf("\n----------------------\n");
    printf("01 - Logar\n");
    printf("02 - Cadastrar\n");
    printf("03 - Imprimir\n");
    printf("----------------------\n\n");
    printf("Valor retornado: %d\n", printf("Boa Tarde\n"));
    return 0;
}
