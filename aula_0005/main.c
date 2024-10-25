#include <stdio.h>
#include <stdlib.h>
/*
    Aula: 0005
    Tema: Como criar variáveis e ler números reais com a função scanf
    Link: https://www.youtube.com/watch?v=z-49xME9RfQ&list=PLqJK4Oyr5WSjjEQCKkX6oXFORZX7ro3DA&index=6
    Data: 25.10.2024
*/

int main()
{
    // tipo_var nome_var
    float numero =  3.1415;
    float novo_valor;

    printf("Valor da minha variável: %.4f\n", numero); // %f é utilizado para números

    printf("Digite um número real: ");
    scanf("%f", &novo_valor);
    printf("Valor lido: %.3f", novo_valor);
    return 0;
}
