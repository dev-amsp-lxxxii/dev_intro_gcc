#include <stdio.h>
#include <stdlib.h>
/*
    Aula: 0013
    Tema: Como ler 2 caracteres e limpar o buffer do teclado com um espaço.
    https://www.youtube.com/watch?v=0DPofLRkhy0&list=PLqJK4Oyr5WSjjEQCKkX6oXFORZX7ro3DA&index=14
    Data: 28.10.2024
*/

int main()
{
    char a, b;

    printf("Digite duas letras: ");

    // espaço entre os %c -> comando para o computador desconsiderar o ENTER, TAB e o ESPAÇO.
    // scanf("%c%c", &a, &b);
    // fflush(); não é recomendado so funciona no windows
    scanf("%c %c", &a, &b);
    // buffer do teclado => f\n
    printf("Primera letra: %c\nSegunda letra: %c\n" ,a ,b);
    return 0;
}
