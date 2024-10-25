#include <stdio.h>
#include <stdlib.h>
/*
    Aula: 0010
    Tema: Como ler vários valores do teclado com a função scanf()
    Link: https://www.youtube.com/watch?v=WmRFcXUb8qs&list=PLqJK4Oyr5WSjjEQCKkX6oXFORZX7ro3DA&index=11
    Data: 25.10.2024
*/

int main()
{
    int num1, num2, num3;
    printf("Digite 3 valores inteiro: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    printf("Valor lidos: %d, %d e %d\n", num1, num2, num3);
    return 0;
}
