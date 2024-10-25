#include <stdio.h>
#include <stdlib.h>
/*
    Aula: 0004
    Tema: Como criar variáveis e ler números inteiros com a função scanf
    Link: https://www.youtube.com/watch?v=cI60nsTQTH0&list=PLqJK4Oyr5WSjjEQCKkX6oXFORZX7ro3DA&index=5
    Data: 25.10.2024
*/

int main()
{
    // criei uma variável para guardar um valor do tipo inteiro.
    int valor, valor1, valor2;

    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &valor1); // para obter o endereço de memória -> &
    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &valor2);

    printf("");
    printf("Primeiro valor -> %d\nSegundo valor -> %d", valor1, valor2);
    // printf("Segundo valor -> %d", valor2);

    printf("\n\n");
    valor = 50; // atribuição -> atribuir um valor a uma variável
    printf("Valor da minha variável: %d\n", valor);
    return 0;
}
